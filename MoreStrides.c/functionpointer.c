#include <stdio.h>
//This point in particular is very useful in C. In C, we can use function pointers to avoid code redundancy
void fun1() {printf("Coding is like therapy to my soul\n");}

void fun2() {printf("It helps me become a better person, :) I hope to change the world one day using these skills.");}

void wrapper(void(*fun)()) {fun();}

int main(){
    (*wrapper)(fun1);
    (*wrapper)(fun2);

    return (0);
}