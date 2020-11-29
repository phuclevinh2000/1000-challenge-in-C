#include <stdio.h>
//1/2 + 1/4 + ... + 1/2n;
int main(void) {
  float  sum;
  int i,a ;

  i=1;
  sum=0.0;
  printf("Press give input n: ");
  scanf("%d", &a);

  while(i<=a)
  {
    sum= sum + 1.0/(2*i);
    i++;
  }
  printf("\nThe answer is %f", sum);
  return 0;
}
