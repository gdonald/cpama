#include <limits.h>
#include <stdio.h>

typedef unsigned char  BYTE;
typedef unsigned short WORD;
typedef unsigned long  DWORD;

union
{
  struct
  {
    DWORD eax, ebx, ecx, edx;
  } dword;

  struct
  {
    WORD axll, axlh, axhl, axhh;
    WORD bxll, bxlh, bxhl, bxhh;
    WORD cxll, cxlh, cxhl, cxhh;
    WORD dxll, dxlh, dxhl, dxhh;
  } word;

  struct
  {
    BYTE al0, al1, al2, al3;
    BYTE ah0, ah1, ah2, ah3;
    BYTE bl0, bl1, bl2, bl3;
    BYTE bh0, bh1, bh2, bh3;
    BYTE cl0, cl1, cl2, cl3;
    BYTE ch0, ch1, ch2, ch3;
    BYTE dl0, dl1, dl2, dl3;
    BYTE dh0, dh1, dh2, dh3;
  } byte;

} regs;

int main(void)
{
  printf("sizeof(BYTE):  %lu\n", sizeof(BYTE)  * CHAR_BIT);
  printf("sizeof(WORD):  %lu\n", sizeof(WORD)  * CHAR_BIT);
  printf("sizeof(DWORD): %lu\n\n", sizeof(DWORD) * CHAR_BIT);

  printf("sizeof(regs.byte):  %lu\n", sizeof(regs.byte)  * CHAR_BIT);
  printf("sizeof(regs.word):  %lu\n", sizeof(regs.word)  * CHAR_BIT);
  printf("sizeof(regs.dword): %lu\n\n", sizeof(regs.dword) * CHAR_BIT);
  
  regs.dword.eax = 1;

  printf("regs.dword.eax: %lu\n\n", regs.dword.eax);

  printf("regs.word.axll: %d\n", regs.word.axll);
  printf("regs.word.axlh: %d\n", regs.word.axlh);
  printf("regs.word.axhl: %d\n", regs.word.axhl);
  printf("regs.word.axhh: %d\n\n", regs.word.axhh);

  printf("regs.byte.al0: %d\n", regs.byte.al0);
  printf("regs.byte.al1: %d\n", regs.byte.al1);
  printf("regs.byte.al2: %d\n", regs.byte.al2);
  printf("regs.byte.al3: %d\n", regs.byte.al3);
  printf("regs.byte.ah0: %d\n", regs.byte.ah0);
  printf("regs.byte.ah1: %d\n", regs.byte.ah1);
  printf("regs.byte.ah2: %d\n", regs.byte.ah2);
  printf("regs.byte.ah3: %d\n\n", regs.byte.ah3);

  regs.byte.al0 = 2;

  printf("regs.byte.al0: %d\n\n", regs.byte.al0);

  printf("regs.word.axll: %d\n\n", regs.word.axll);

  printf("regs.dword.eax: %lu\n", regs.dword.eax);
  
  return 0;
}
