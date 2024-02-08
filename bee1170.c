#include <stdio.h>
#include <math.h>
 
int main() {
    int n, d, i;
    float food;
    
    scanf("%d", &n);
    
    while (n--){
        scanf("%f", &food);
        for (i = 1; ; i++){
           if (food <= pow(2,i)){
               printf("%i dias\n", i);
               break;
           } 
        }
    }
 
    return 0;
}