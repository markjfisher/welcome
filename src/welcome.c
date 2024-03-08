#include <conio.h>
#include <stdio.h>

void debug() {}

int main(void) {
  char hxp = 6;
  char txp = 3;
  char yps = 3;

  clrscr();

  chlinexy(2, yps - 1, 36);

  revers(1);
  cputsxy(hxp, yps + 1, "                            ");
  cputsxy(hxp, yps + 2, "  Welcome to VCF-East 2024  ");
  cputsxy(hxp, yps + 3, " Beginner Assembler Course! ");
  cputsxy(hxp, yps + 4, "       By Mark Fisher       ");
  cputsxy(hxp, yps + 5, "                            ");
  revers(0);

  chlinexy(2, yps + 7, 36);

  cputsxy(txp, yps +  9, " Useful commands:");
  cputsxy(txp, yps + 11, " EASMD : launch assembly editor");
  cputsxy(txp, yps + 12, " DOS   : DOS mode from EASMD");
  cputsxy(txp, yps + 13, " RUN   : return to EASMD from DOS");

  revers(1);
  cputsxy(txp + 2, yps + 17, " Press a key to load EASMD ");
  revers(0);

  cgetc();
  clrscr();

  return 0;
}