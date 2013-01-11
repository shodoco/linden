#include <stdio.h>
#include <time.h>

int main(){
  time_t biggest = ~(0x1 << (sizeof(time_t) * 8 - 1));
  printf("biggest = %s", ctime(&biggest));

  time_t current = time(NULL);
  printf("current = %s", ctime(&current));
  return 0;
}
