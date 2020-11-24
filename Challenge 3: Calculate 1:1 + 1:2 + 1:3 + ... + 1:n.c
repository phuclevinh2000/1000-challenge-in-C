#include <stdio.h>
//1+ 1/2 + 1/3 + ... + 1/n;
int main(void) {
  float  sum;
  int i,a ;

  i=1;
  sum=0.0;
  printf("Press give input n: ");
  scanf("%d", &a);

  while(i<=a)
  {
    sum= sum + 1.0/i;
    i++;
  }
  printf("\nThe answer is %.2f", sum);
  return 0;
}
