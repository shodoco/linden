#include<stdio.h>

char ga[] = {'a', 'b', 'c', 'd'};

int main(void){
    printf("&ga = %p\n", &ga);
    printf("&(ga[0]) = %p\n", &(ga[0]));
    printf("&(ga[1]) = %p\n", &(ga[1]));

    accept_chararr(ga);
    accept_charptr(ga);
}

void accept_chararr(char ca[]){
    printf("&ca = %p\n", &ca);
    printf("&(ca[0]) = %p\n", &(ca[0]));
    printf("&(ca[1]) = %p\n", &(ca[1]));
}

void accept_charptr(char *pa){
    printf("&pa = %p\n", &pa);
    printf("&(pa[0]) = %p\n", &(pa[0]));
    printf("&(pa[1]) = %p\n", &(pa[1]));
    printf("++pa = %p\n", ++pa);
}
