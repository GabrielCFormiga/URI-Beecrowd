#include <stdio.h>

int main(){
    int h1, h2;

    scanf("%d %d", &h1, &h2);

    if(h1 > h2){
        printf("O JOGO DUROU %d HORA(S)\n", (24 - h1) + h2);
    } else if(h1 == h2){
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else {
        printf("O JOGO DUROU %d HORA(S)\n", h2 - h1);
    }

    return 0;
}