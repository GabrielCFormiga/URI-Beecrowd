#include <stdio.h>
 
int main() {
    float salary, reajuste;
    char c = '%';
    scanf("%f", &salary);
    
    if (salary <= 400){
        reajuste = salary*0.15;
        printf("Novo salario: %.2f\n", salary + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %c\n", 15, c);
    } else if (salary <= 800){
        reajuste = salary*0.12;
        printf("Novo salario: %.2f\n", salary + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %c\n", 12, c);
    } else if (salary <= 1200){
        reajuste = salary*0.10;
        printf("Novo salario: %.2f\n", salary + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %c\n", 10, c);
     } else if (salary <= 2000){
        reajuste = salary*0.07;
        printf("Novo salario: %.2f\n", salary + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %c\n", 7), c;
     } else {
        reajuste = salary*0.04;
        printf("Novo salario: %.2f\n", salary + reajuste);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %c\n", 4), c; 
     }
    
    return 0;
}