#include <stdio.h>

int main(){
    char suit = 11;
    //A switch statement checks a single variable for different values
    switch(suit) {
    case 'C' :
    puts("Clubs");
    break;

    case 'D' :
    puts("Diamonds");
    break;

    case 'H':
    puts("Hearts");
    break;

    default:
    puts("Spades");

    }
}