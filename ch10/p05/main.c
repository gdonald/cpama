#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

#define RANK 0
#define SUIT 1

bool royal, straight, flush, four, three;
int pairs;

void read_cards(int hand[5][2]);
void analyze_hand(int hand[5][2]);
void sort(int hand[5][2], int n);
void reset(int hand[5][2]);
void print_result(void);

bool is_duplicate(int hand[5][2], int rank, int suit, int cards_read);

int main(void)
{
  int hand[5][2];
  
  for(;;)
  {
    reset(hand);
    read_cards(hand);
    analyze_hand(hand);
    print_result();
  }

  return 0;
}

bool is_duplicate(int hand[5][2], int rank, int suit, int cards_read)
{
  for(int x = 0; x < cards_read; x++)
  {
    if(hand[x][RANK] == rank && hand[x][SUIT] == suit)
    {
      return true;
    }
  }

  return false;
}

void reset(int hand[5][2])
{
  for(int x = 0; x < NUM_CARDS; x++)
  {
    hand[x][RANK] = -1;
    hand[x][SUIT] = -1;
  }
}

void read_cards(int hand[5][2])
{
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  while(cards_read < NUM_CARDS)
  {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();

    switch(rank_ch)
    {
    case '0':
      exit(EXIT_SUCCESS);
    case '2':
      rank = 0;
      break;
    case '3':
      rank = 1;
      break;
    case '4':
      rank = 2;
      break;
    case '5':
      rank = 3;
      break;
    case '6':
      rank = 4;
      break;
    case '7':
      rank = 5;
      break;
    case '8':
      rank = 6;
      break;
    case '9':
      rank = 7;
      break;
    case 't':
    case 'T':
      rank = 8;
      break;
    case 'j':
    case 'J':
      rank = 9;
      break;
    case 'q':
    case 'Q':
      rank = 10;
      break;
    case 'k':
    case 'K':
      rank = 11;
      break;
    case 'a':
    case 'A':
      rank = 12;
      break;
    default:
      bad_card = true;
    }

    suit_ch = getchar();
    switch(suit_ch)
    {
    case 'c':
    case 'C':
      suit = 0;
      break;
    case 'd':
    case 'D':
      suit = 1;
      break;
    case 'h':
    case 'H':
      suit = 2;
      break;
    case 's':
    case 'S':
      suit = 3;
      break;
    default:
      bad_card = true;
    }

    while((ch = getchar()) != '\n')
    {
      if(ch != ' ')
      {
	bad_card = true;
      }
    }

    if(bad_card)
    {
      printf("Bad card, ignored.\n");
    }
    else if(is_duplicate(hand, rank, suit, cards_read))
    {
      printf("Duplicate card, ignored.\n");
    }
    else
    {
      hand[cards_read][RANK] = rank;
      hand[cards_read++][SUIT] = suit;
    }
  }
}

void sort(int hand[5][2], int n)
{
  if(n == 0)
  {
    return;
  }

  int largest = 0, index = 0;
  int tmp[2];
  
  for(int x = 0; x < n; x++)
  {
    if(hand[x][RANK] > largest)
    {
      largest = hand[x][RANK];
      index = x;
    }
  }

  tmp[RANK] = hand[n - 1][RANK];
  tmp[SUIT] = hand[n - 1][SUIT];
  hand[n - 1][RANK] = hand[index][RANK];
  hand[n - 1][SUIT] = hand[index][SUIT];
  hand[index][RANK] = tmp[RANK];
  hand[index][SUIT] = tmp[SUIT];

  sort(hand, n - 1);
}

void analyze_hand(int hand[5][2])
{
  royal = false;
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;

  int x, rank, same_rank;

  // flush
  for(x = 1; x < NUM_CARDS; x++)
  {
    if(hand[0][SUIT] != hand[x][SUIT])
    {
      break;
    }
  }

  if(x == NUM_CARDS)
  {
    flush = true;
  }

  // straight
  sort(hand, NUM_CARDS);

  for(x = 1; x < NUM_CARDS; x++)
  {
    if(hand[x][RANK] != (hand[x - 1][RANK] + 1))
    {
      break;
    }
  }

  if(x == NUM_CARDS)
  {
    straight = true;
  }

  if((x == NUM_CARDS - 1) && hand[0][0] == 0 && hand[x][0] == 12)
  {
    straight = true;
  }

  // royal
  if(straight && flush && hand[0][RANK] == 8)
  {
    royal = true;
  }
  
  // counts  
  for(x = 0; x < NUM_CARDS;)
  {
    rank = hand[x][RANK];
    same_rank = 0;

    do
    {
      same_rank++;
      x++;

    } while(x < NUM_CARDS && hand[x][RANK] == rank);

    switch(same_rank)
    {
    case 2:
      pairs++;
      break;
    case 3:
      three = true;
      break;
    case 4:
      four = true;
      break;
    }
  }
}

void print_result(void)
{
  if(royal)
  {
    printf("Royal flush");
  }
  else if(straight && flush)
  {
    printf("Straight flush");
  }
  else if(four)
  {
    printf("Four of a kind");
  }
  else if(three && pairs == 1)
  {
    printf("Full house");
  }
  else if(flush)
  {
    printf("Flush");
  }
  else if(straight)
  {
    printf("Straight");
  }
  else if(three)
  {
    printf("Three of a kind");
  }
  else if(pairs == 2)
  {
    printf("Two pairs");
  }
  else if(pairs == 1)
  {
    printf("Pair");
  }
  else
  {
    printf("High card");
  }

  printf("\n\n");
}
