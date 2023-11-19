#include <stdio.h>

int main(void) {
  int num = 0, denom = 0, gcd = 0;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  int n = num;
  int d = denom;

  while (n != 0 && d != 0){
    gcd = n % d;
    n = d;
    d = gcd;
  }

  printf("In lowest terms: %d/%d\n", num/n, denom/n);

  return 0;
}