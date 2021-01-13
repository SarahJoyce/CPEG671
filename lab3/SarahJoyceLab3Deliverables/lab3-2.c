#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

 char input[30];
 char easy[10] = "thatwaseasy";
 char reverse[10];

 printf("Enter the password: ");
 scanf("%s", input);

 int count = 0;
 int j = 10;
 for(int i=0; i<=10; i++){
    reverse[i] = easy[j--];
    reverse[i] -= 0x20;
    if(input[i]==reverse[i]){
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
