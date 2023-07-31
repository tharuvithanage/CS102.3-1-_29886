#include <stdio.h>

int main() {
  int num, positive = 0, negative = 0, zero = 0;

  printf("Enter 10 numbers: ");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &num);
    if (num > 0) {
      positive++;
    } else if (num < 0) {
      negative++;
    } else {
      zero++;
    }
  }

  printf("Number of positive numbers: %d\n", positive);
  printf("Number of negative numbers: %d\n", negative);
  printf("Number of zeros: %d\n", zero);

  return 0;
}
