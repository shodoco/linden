#include<stdio.h>
/**
 * Data segment
 */
char c = 'd';
/**
 * BSS segment
 */
int i;

int main(void)
{
    float f = 0.1;

    printf("Starting address of stack segment is %p\n", &f);
    printf("Starting address of BSS segment is %p\n", &i);
    printf("Starting address of data segment is %p\n", &c);
}
