#include <stdio.h>

void ZeraArray(int array[], int limite){
    for(int i = 0; i < limite; i++){
        array[i] = 0;
    }
}

int main(){
    int ContaQuestao[101];
    int numDaPergunta, perguntas, freq, adicionar;
    
    while(1){
        adicionar = 0;
        ZeraArray(ContaQuestao, 101);
        scanf("%d %d", &perguntas, &freq);

        if(perguntas == 0 & freq == 0){
            break;
        }

        for(int i = 0; i < perguntas; i++){
            scanf("%d", &numDaPergunta);
            ContaQuestao[numDaPergunta]++;
        }

        for(int i = 1; i < 101; i++){
            if(ContaQuestao[i] >= freq){
                adicionar++;
            }
        }

        printf("%d\n", adicionar);
    } 


 
   
    return 0;
}