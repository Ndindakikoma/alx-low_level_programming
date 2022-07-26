#include <stdio.h>

/**
*main-rints all single digit numbers of base 10 starting from 0
*
*return: always 0 (success)
*/
int main(void)
{
	int base10;
  
  for(int base10 = 0; base10<=9; base10++)
    {
      printf("%d", base10);
    }
  putchar('\n');
  return 0;
}   
