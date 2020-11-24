#include <stdio.h>
//1^2+ 2^2 + 3^2 + ... + n^2;
int main(void) {
  int a, sum=0;
  printf("Press give input n: ");
  scanf("%d", &a);

  for(int i=0; i<=a; i++)
  {
    sum+=i*i;
  }
  printf("\n%d", sum);
  return 0;
}
