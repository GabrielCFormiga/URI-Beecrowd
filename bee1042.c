#include <stdio.h>

int main(){
    int a, b, c, trocou, aux;
    int Ordem[3];
    
    scanf("%d %d %d", &a, &b, &c);

    Ordem[0] = a;
    Ordem[1] = b;
    Ordem[2] = c;

    while(1){
        trocou = 0;

        for(int i = 0; i < 2; i++){
            if(Ordem[i] > Ordem[i + 1]){
               aux = Ordem[i];
               Ordem[i] = Ordem[i + 1];
               Ordem[i + 1] = aux;
               trocou = 1; 
            }
        }

        if(trocou == 0){
            break;
        }
    }

    for(int i = 0; i < 3; i++){
        printf("%d\n", Ordem[i]);
    }

    printf("\n%d\n%d\n%d\n", a, b, c);



    return 0;
}