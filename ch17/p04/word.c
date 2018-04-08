#include <stdio.h>
#include "word.h"

int read_char(void)
{
  int ch = getchar();

  return (ch == '\n' || ch == '\t') ? ' ' : ch;
}

int read_word(char *word, int len)
{
  int ch, pos = 0;

  while((ch = read_char()) == ' ');

  while(ch != ' ' && ch != EOF)
  {
    if(pos < len)
    {
      word[pos++] = ch;
    }

    ch = read_char();
  }

  if(pos > MAX_WORD_LEN)
  {
    word[MAX_WORD_LEN] = '*';
    pos = MAX_WORD_LEN + 1;
  }
  
  word[pos] = '\0';

  return pos;
}
