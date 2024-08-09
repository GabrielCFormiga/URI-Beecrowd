#include <stdio.h>
 
int main() {
    int P, R;
    scanf("%d %d", &P, &R);
    
    if (P == 0){
        printf("C\n");
    } else {
        if (R == 1) {
            printf("A\n");
        } else {
            printf("B\n");
        }
    }
    
 
    return 0;
}