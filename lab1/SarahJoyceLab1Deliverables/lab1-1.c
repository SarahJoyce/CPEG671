/* Sarah Joyce */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[]){
  assert(argc==3);

  int inputOne = atoi(argv[1]);
  int inputTwo = atoi(argv[2]);

  int sum = inputOne + inputTwo;

  printf("%d\n", sum);
  fflush(stdout);
  return 0;
}
