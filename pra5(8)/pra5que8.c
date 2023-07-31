#include <stdio.h>

int main() {
  int n, temp, sum = 0, digit, power;

  printf("Enter a number: ");
  scanf("%d", &n);

  temp = n;
  while (temp > 0) {
    digit = temp % 10;
    power = (int)log10(n) + 1;
    sum += digit * digit * digit;
    temp /= 10;
  }

  if (sum == n) {
    printf("%d is an Armstrong number.\n", n);
  } else {
    printf("%d is not an Armstrong number.\n", n);
  }

  return 0;
}
