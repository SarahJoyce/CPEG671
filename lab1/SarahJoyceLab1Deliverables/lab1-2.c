/* Sarah Joyce */

#include <stdlib.h>
#include <stdio.h>

int main(){
 
 int x = 1;
 int *y = &x;

 printf("value of x: %d\n", x);
 printf("value of y: %p\n", y);
 printf("address of x: %p\n", &x);
 printf("address of y: %p\n", &y);
 printf("value pointed at by y: %d\n", *y);
 return 0;
}
