#include <stdio.h>

//
void arrReversal(int arr[], int arr2[], int sizeofarray) {
  for (int i = 0; i < sizeofarray; i++) {
    arr2[i] = arr[sizeofarray - i - 1];
  }
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int arr2[7] = {};
  int arrayLength = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < arrayLength; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
  arrReversal(arr, arr2, arrayLength);
  printf("\n");
  for (int j = 0; j < arrayLength; j++) {
    printf("%d", arr2[j]);
  }

  return 0;
}