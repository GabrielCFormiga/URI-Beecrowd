#include <stdio.h>

int main(void){
    int x, y, i, sum;

    do{
        scanf("%d", &x);
        scanf("%d", &y);

        if ( x <= 0 || y <= 0){
            break;
        }       
        
        if (x > y) {
            sum = ((x + y)/2)*(x - y + 1);
            for (i = y; i <= x; i++){
                printf("%d ", i);
            }
        } else {
            sum = ((x + y)/2)*(y - x + 1);
            for (i = x; i <= y; i++){
                printf("%d ", i);
            }
        } 

        printf("Sum=%d\n", sum);
    } while(x != 0 && y !=0);
    
    return 0;
}    
    
    
    