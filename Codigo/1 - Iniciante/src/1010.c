#include <stdio.h>
 
int main() {
    short code, units, i = 2;
    float price, total =0;
    
    while (i--){
        scanf("%hd %hd %f", &code, &units, &price);
        total = total + price*units;
    }
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}