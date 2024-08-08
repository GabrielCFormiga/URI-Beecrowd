#include <stdio.h>
 
int main(){
    int numCompetidors, overtakings, aux;
    int starting[24], finishing[24];
    
    while(scanf("%d", &numCompetidors) != EOF){  
        overtakings = 0;
        for(int i = 0; i < numCompetidors; i++){
            scanf("%d", &starting[i]);
        }

        for(int i = 0; i < numCompetidors; i++){
            scanf("%d", &finishing[i]);
        }

        for(int i = 0; i < numCompetidors; i++){
            if(starting[i] != finishing[i]){
                for(int j = i; j < numCompetidors; j++){
                    if(starting[j] == finishing[i]){
                        overtakings += j - i;
                        aux = starting[i];
                        starting[i] = starting[j];
                        
                        for(int k = j; k > i + 1; k--){
                            starting[k] = starting[k - 1];
                        }

                        starting[i + 1] = aux;
                        break;
                    }
                }
            }
        }

        printf("%d\n", overtakings);
    }
 
    return 0;
}