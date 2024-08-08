#include <stdio.h>

int factorial(int x);

int main() {
    int m, n;
    
    while (scanf("%d%d", &m, &n) != EOF){
        printf("%d\n", factorial(m) + factorial(n));
    }
 
    return 0;
}

int factorial(int x){
    int factorial = 1;
    for (int i = 0; i <= x; i++){
        if (i != 0){
            factorial *= i;
        }
    }
    
    return factorial;
}
