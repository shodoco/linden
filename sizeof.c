#include<stdio.h>

int main(void)
{
    int p = 2;

    int apple = sizeof (int) * p;

    printf("sizeof (int) * p = %d\n", apple);

    return 0;
}
