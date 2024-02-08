#include <stdio.h>
 
int main(){
    int testes, estudantes, notas[1000], notasAposMudanca[1000], contador;
    
    scanf("%d", &testes);
    
    while(testes--){
        contador = 0;
        scanf("%d", &estudantes);
        
        for(int i = 0; i < estudantes; i++){
            scanf("%d", &notas[i]);
            notasAposMudanca[i] = notas[i];
        }
        
        int aux, trocou = 1;
        while(trocou){
            trocou = 0;
            for(int i = 0; i < estudantes - 1; i++){
                if(notasAposMudanca[i] < notasAposMudanca[i + 1]){
                    aux = notasAposMudanca[i];
                    notasAposMudanca[i] = notasAposMudanca[i + 1];
                    notasAposMudanca[i + 1] = aux;
                    trocou = 1;   
                }
            }
        }

         for(int i = 0; i < estudantes; i++){
            if(notas[i] == notasAposMudanca[i]){
                contador++;
            }
         }

         printf("%d\n", contador);
    }
 
    return 0;
}