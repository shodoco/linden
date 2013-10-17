/*
 * Pg. 256
 */
#include<stdio.h>

int main(void)
{
    char apricot[2][3][5];

    char (*r)[5] = apricot[0];
    char *t = apricot[0][0];

    printf("r = %p\n", r, ++r);
    printf("t = %p\n", t, ++t);

    printf("++r = %p\n", ++r);
    printf("++t = %p\n", ++t);

    return 0;
}
