#include <stdio.h>
#include <time.h>
#include <limits.h>

int main(){
    /* INT_MAX on 32bit platforms, LONG_MAX on 64bit platforms.
     * But the 64bit value is to big to act as a reasonable time
     */
    time_t biggest = INT_MAX;
    printf("biggest = %s", ctime(&biggest));
    
    /* Current time */
    time_t current = time(NULL);
    printf("current = %s", ctime(&current));
    
    return 0;
}
