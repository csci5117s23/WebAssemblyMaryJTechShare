#include <stdio.h>

int sumArray(int *arr, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += arr[i];
  return sum;
}

int main() {
  return 0;
}