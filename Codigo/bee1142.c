#include <stdio.h>
 
int main() {
    int n, j, k;
    
    scanf("%d", &n);
    k = 1 + 4*(n - 1);
    
    for (j = 1; j <= k; j += 4){
        printf("%d %d %d PUM\n", j, j + 1, j + 2);
    }
 
    return 0;
}