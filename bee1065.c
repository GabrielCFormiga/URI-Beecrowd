#include <stdio.h>

int main(void){
    int integer1, integer2, integer3, integer4, integer5;
    
    printf("insert your 5 integers: ");
    scanf("%d %d %d %d %d", &integer1, &integer2, &integer3, &integer4, &integer5);
    
    int odd, notodd;
    odd = (integer1%2) + (integer2%2) + (integer3%2) + (integer4%2) + (integer5%2);
    notodd = 5 - odd;
    
    printf("%d valores pares", notodd);
    
    return 0;
    
}