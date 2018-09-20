#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  
  //create array large enough to store 10 ints
  int arr[10];

  srand( time(NULL) );

  //populate arr w/ random vals
  for (int i = 0; i < 9; i++)
    arr[i] = rand();

  //set last val in arr to 0
  arr[9] = 0;

  //print out vals in arr
  for (int i = 0; i < 10; i++)
    printf("arr[%d]: %d\n",i,arr[i]);

  //create separate array to store 10 ints
  int arr2[10];

  //using pointers, populate second arr w/ values in first arr, reverse val
  int * p = &arr;
  int * twoP = &arr2;

  for(int i = 0; i < 10; i++)
    * (twoP + i) = * (p + 9 - i);

  //print out vals in second arr
  for (int i = 0; i < 10; i++)
    printf("arr2[%d]: %d\n",i,arr2[i]);

  return 0;
  
}
