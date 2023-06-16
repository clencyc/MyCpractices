// Online C compiler to run C program online
#include <stdio.h>

int main(){

/* Assume name shorter than 20 chars. */
char ex[20];
//the (puts) helps arrange work nealy buy placing input in a new line
puts("Enter boyfriend's name: ");
//%19, is so as to fit the number of letters entered into the computer's memory
scanf("%19s", ex);
printf("Dear %s.\n\n\tWe Care About You.\n", ex);
}