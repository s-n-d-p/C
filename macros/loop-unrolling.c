/* this is a 'include' directive */
#include <stdio.h>

/* another example of a macro (uses '#define' directive) */
#define arr_size(x) sizeof(x) / sizeof(x[0])

#define LOOP1(x, ...) printf("%d ", x);

#define LOOP2(x, ...) \
    printf("%d ", x); \
    LOOP1(__VA_ARGS__)

#define LOOP3(x, ...) \
    printf("%d ", x); \
    LOOP2(__VA_ARGS__)

int main()
{
    int a[3] = {3, 2, 1};

    printf("Using loop to print array\n");

    /* loop */
    /* better readability */
    /* design over minor performance gain */
    for (int *p = a; p < (a + arr_size(a)); ++p)
    {
        printf("%d ", *p);
    }

    printf("\nUsing unrolled-loop to print array\n");

    /* loop-unrolled */
    /* macros improve readability of unrolled loop */
    /* minor performance gain (could be significant for embedded system) over design */
    LOOP3(a[0], a[1], a[2]);

    return !printf("\n");
}