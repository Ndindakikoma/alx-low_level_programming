#include <stdio.h>
#include <stdlib.h>

/**
*putchar - alphabet
*
*return: always 0 (success)
**/

int main(void)
{
  char c = 'a';

  while(c <= 'z')
  {
    putchar(c);
    c++;
  }
  putchar('\n');
  return 0;
}
