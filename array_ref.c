#include<stdio.h>
#include "array_def.h"

/* Will have problem in compilation with
 * extern char *p
 */

extern char p[];

int main(void)
{
    char *q = &p;
    printf("The first elment is %c\n", p[0]);
    printf("The second element is %c\n", q[1]);
}
