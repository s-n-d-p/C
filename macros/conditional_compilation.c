/* compile with and without to see the difference -D_FR_ */

#include <stdio.h>

int main()
{
#ifndef _FR_
    printf("Hello World");
#else
    printf("Bonjour");
#endif

    return !printf("\n");
}