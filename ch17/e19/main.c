#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define CMD_LEN 32

void new_cmd(void)
{
  printf("new_cmd!\n");
}

void open_cmd(void)
{
  printf("open_cmd!\n");
}

void close_cmd(void)
{
  printf("close_cmd!\n");
}

void close_all_cmd(void)
{
  printf("close_all_cmd!\n");
}

void save_cmd(void)
{
  printf("save_cmd!\n");
}

void save_as_cmd(void)
{
  printf("save_as_cmd!\n");
}

void save_all_cmd(void)
{
  printf("save_all_cmd!\n");
}

void print_cmd(void)
{
  printf("print_cmd!\n");
}

void exit_cmd(void)
{
  printf("exit_cmd!\n");
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while(isspace(ch = getchar()));

  while(ch != '\n' && ch != EOF)
  {
    if(i < n)
    {
      str[i++] = ch;
    }

    ch = getchar();
  }

  str[i] = '\0';
  return i;
}

struct command
{
  char *cmd_name;
  void (*cmd_pointer)(void);
} file_cmds[] =
{
  {"new",       new_cmd},
  {"open",      open_cmd},
  {"close",     close_cmd},
  {"close all", close_all_cmd},
  {"save",      save_cmd},
  {"save as",   save_as_cmd},
  {"save all",  save_all_cmd},
  {"print",     print_cmd},
  {"exit",      exit_cmd},
};

void call(char *cmd)
{
  int count = sizeof(file_cmds) / sizeof(file_cmds[0]);

  for(int x = 0; x < count; x++)
  {
    if(strcmp(cmd, file_cmds[x].cmd_name) == 0)
    {
      file_cmds[x].cmd_pointer();
      break;
    }
  }
}

int main(void)
{
  char cmd[CMD_LEN];
  printf("Enter command: ");
  read_line(cmd, CMD_LEN);
  call(cmd);
  
  return 0;
}
