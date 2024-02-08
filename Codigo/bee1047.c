#include <stdio.h>

int main(){
    int h1, m1, h2, m2, t1, t2;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    t1 = 60*h1 + m1;
    t2 = 60*h2 + m2;

    if(t1 > t2){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ((1440 - t1) + t2)/60, ((1440 - t1) + t2)%60);
    } else if(t1 == t2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (t2 - t1)/60, (t2 - t1)%60);
    }

    return 0;
}