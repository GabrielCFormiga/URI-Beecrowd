#include <stdio.h>
 
int main() {
    int n, i, result, mary, john;
    
    do {
        scanf("%d", &n);
        mary = john = 0;
        
        for (i = 1; i <= n; i++){
            scanf("%d", &result);
            if (result == 0){
                mary++;
            } else {
                john++;
            }
        }
    
        printf("Mary won %d times and John won %d times\n", mary, john);
    } while (n != 0);
    
    return 0;
}