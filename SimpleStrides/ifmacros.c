#include <stdio.h>

#if !defined(MESSAGE)
#define MESSAGE "Anyone can code, "
#endif

int main()
{
    printf("Here is the message: %s\n", MESSAGE);
}