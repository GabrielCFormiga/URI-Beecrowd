#include <stdio.h>
#include <math.h>
 
int main(){
    int n, contador; 
    long int x;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%ld", &x);
        contador = 0;

        for (int i = 2; i <= sqrt(x); i++){
            int resto;
            resto = x % i;
            if (resto == 0 ){
                contador++;
            } 
        }

        if (contador == 0){
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}