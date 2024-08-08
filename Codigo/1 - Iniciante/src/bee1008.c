#include <stdio.h>
 
int main() {
    int n, hours;
    float amount;
    
    scanf("%d %d %f", &n, &hours, &amount);
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, hours*amount);
    return 0;
}