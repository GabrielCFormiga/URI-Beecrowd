#include <stdio.h>

int main(void){
    int x, y;
    printf("Insira o codigo: ");
    scanf("%d", &x);
    printf("Insira a quantidade: ");
    scanf("%d", &y);
    
    float price;
    
    if (x == 1) {
        price = 4.0*y;
    } else if (x == 2) {
        price = 4.5*y;
    } else if (x == 3) {
        price = 5.0*y;
    } else if (x == 4) {  
        price = 2.0*y;
    } else if (x == 5) {    
        price = 1.5*y;
    }
    
    printf("Total: R$%.2f", price);
    
    return 0;
}