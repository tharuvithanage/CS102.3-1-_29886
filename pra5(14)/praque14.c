#include <stdio.h>

int main() {
  int arr[10], i;

  printf("Enter 10 integers: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  printf("The array is: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
  return 0;
}
