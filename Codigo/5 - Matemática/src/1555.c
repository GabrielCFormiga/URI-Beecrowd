#include <stdio.h>
 
int main() {
    int r, b, c, n, x, y;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d%d", &x, &y);
        r = 3*3*x*x + y*y; 
        b = 2*x*x + 5*5*y*y;
        c = -100*x + y*y*y;
    
        if (r > b){
            if (r > c){
                printf("Rafael ganhou\n");
            } else {
                printf("Carlos ganhou\n");
            }       
        } else {
            if (b > c){
                printf("Beto ganhou\n");
            } else {
                printf("Carlos ganhou\n");
            }       
        }
    }
 
    return 0;
}