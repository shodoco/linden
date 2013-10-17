#include <stdio.h>

int array[] = {2, 3, 5, 7, 11, 13, 17};
#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))

int main(void)
{
    int d = -1;

    /* Variable d is promoted to unsigned int.
     * A correct way is to cast TOTAL_ELEMENTS to int.
     */
    if(d <= TOTAL_ELEMENTS - 2){
        printf("d (%d) is no greater than TOTAL_ELEMENTS - 2 (%lu)\n", d, TOTAL_ELEMENTS - 2);
    } else {
        printf("d (%d) is greater than TOTAL_ELEMENTS - 2 (%lu)\n", d, TOTAL_ELEMENTS - 2);
    }

    return 0;
}
