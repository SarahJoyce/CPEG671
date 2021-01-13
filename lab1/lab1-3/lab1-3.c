#include <stdio.h>
#include <stdlib.h>

int main(void){
 int array[3];
 int size = sizeof(array)/sizeof(int);

 array[0] = 42;
 array[1] = 1337;
 array[2] = 0;

 for(int i=0; i<size; i++){
  printf("%d\n", *(array + i));
 }
}
