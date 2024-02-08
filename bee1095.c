#include <stdio.h>
 
int main() {
    int i;
    
    for(i = 0; i < 13; i++) {
        printf("I=%d ", (1 + 3*i));
        printf("J=%d\n", (60 - 5*i));
    }
 
    return 0;
}