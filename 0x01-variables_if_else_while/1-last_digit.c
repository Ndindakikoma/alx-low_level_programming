#include <stdlib.h>
#include <time.h>
/** 
* main - Entry point
*
*return: always 0(success)
**/
int main(void)
{
  int n;
  char last[] = "Last digit of";

  srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);

	if ((n%10) > 5){
    printf("and is greater than 5\n");
  }
   else if ((n%10) == 0){
     printf("and is zero\n");
   }
   else{
     printf("and is less than 6 and not 0\n");
   }
	return (0);
}
