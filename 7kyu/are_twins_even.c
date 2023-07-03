/*
DESCRIPTION:
Task
Given an array of up to 100 numbers ranging from 1 to 1000, determine how many distinct even sums can be obtained by combinations of 2 different elements ( i.e. different indices, not necessarily different numbers ).

Assume you will always have at least 2 numbers.
*/

#include <stdlib.h>

int countDistinct(int length, int array[]) {
  int count = 0;
  for(int i = 0; i < length; ++i) {
    int j;
    for(j = 0; j < i; ++j)
       if(array[i] == array[j])
          break;
    if(i == j)
      count++;
  }
  return count;
}

unsigned even_twins(size_t length, const unsigned array[length]) {
    
    int add = 0;
    int count = 0;
    int* evenSums = (int*)malloc(length * (length - 1) / 2 * sizeof(int));
    int index = 0;
  
    for(size_t i = 0; i < length; ++i){
      for(size_t j = i + 1; j < length; ++j){
        add = array[i] + array[j];
        if((add % 2 == 0)){
          evenSums[index++] = add;
        }
      }
    }
    count = countDistinct(index, evenSums);
  
    free(evenSums);
  
    return count;
}