#include <stdio.h>

typedef int (*do_arithmetic)(int, int);

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    do_arithmetic op;

    op = &add;
    printf("5 + 3 = %d\n", op(5, 3));

    op = &subtract;
    printf("5 - 3 = %d", op(5, 3));

    return !printf("\n");
}