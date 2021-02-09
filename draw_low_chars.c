#include "draw.h"             /* for font */
#include "stdio.h"            /* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;     //First 20 ASCII are not printable
  for (char row = 0; row < 7; row++) {
    unsigned short rowMask = 0x1 << (row);
    for (char col = 0; col < 5; col++) {
      unsigned char colBits = font_5x7[c][col];
      putchar ( (colBits & rowMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
