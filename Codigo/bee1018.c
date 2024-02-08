#include <stdio.h>
 
int main() {
    int n, j, i;
    
    scanf("%d", &n);
    printf("%d\n", n);
    
    i = n/100;
    j = n%100;
    printf("%d nota(s) de R$ 100,00\n", i);
    i = j/50;
    j = j%50;
    printf("%d nota(s) de R$ 50,00\n", i);
    i = j/20;
    j = j%20;
    printf("%d nota(s) de R$ 20,00\n", i);
    i = j/10;
    j = j%10;
    printf("%d nota(s) de R$ 10,00\n", i);
    i = j/5;
    j = j%5;
    printf("%d nota(s) de R$ 5,00\n", i);
    i = j/2;
    j = j%2;
    printf("%d nota(s) de R$ 2,00\n", i);
    i = j/1;
    j = j%1;
    printf("%d nota(s) de R$ 1,00\n", i);
    
    return 0;
}