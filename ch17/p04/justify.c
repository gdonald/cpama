
#include <string.h>
#include "line.h"
#include "word.h"

struct node *line;

int main(void)
{
  char word[MAX_WORD_LEN + 2];
  int word_len;

  clear_line();

  for(;;)
  {
    word_len = read_word(word, MAX_WORD_LEN + 1);

    if(word_len == 0)
    {
      flush_line();
      return 0;
    }

    if(word_len + 1 > space_remaining())
    {
      write_line();
      clear_line();
    }

    add_word(word);
  }

  struct node *p;
  while(line)
  {
    p = line;
    line = line->next;
    free(p);
  }
}
