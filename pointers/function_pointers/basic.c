/* how to declare a function pointer */
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*do_arithmetic)(int, int) = &add;
    printf("Sum: %d", do_arithmetic(5, 3));

    return !printf("\n");
}