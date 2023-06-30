#include <stdio.h>
//one way is to use if or switch case expressions

#define ops 4
float sum(float a, float b) {return (a + b);}

float sub(float a, float b) {return (a - b);}

float mult(float a, float b) {return (a * b);}

float div(float a, float b) {return (a / b);}

int main(){
    float (*ptr2func[ops]) (float, float) = {sum, sub, mult, div};
    float a, b;
    int choice;
    printf("Choose operation: 0 for add, 1 for subtract, 2 for mult, 3 for div:\n.");
    scanf("%d", &choice);

    if (choice > 3){
        printf("Choice not available :)");
        return (1);
    }
    
    printf("Enter a number:\n");
    scanf("%f", &a);

    printf("Enter a second number:\n");
    scanf("%f", &b);

    printf("The answer is : %d", ptr2func[choice] (a, b));
    return 0;




}