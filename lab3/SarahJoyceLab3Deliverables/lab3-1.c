#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

 char input[30];
 char easy[] = "thatwaseasy";

 printf("Enter the password: ");
 scanf("%s", input);

 int count = 0;
 for(int i=0; i<=10; i++){
   if(input[i] == (easy[i] ^ 42)){
	count++;
    }
 }
 if(count == strlen(easy)){
	printf("Correct!\n");
 }else{
	printf("Incorrect!\n");
 }
 return 0;
}
