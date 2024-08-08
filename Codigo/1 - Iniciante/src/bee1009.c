#include <stdio.h>
 
int main() {
    float salary, sales;
    char name[30]; 
    
    scanf("%s %f %f", name, &salary, &sales);
    
    printf("TOTAL = R$ %.2f\n", salary + 0.15*sales);
 
    return 0;
}