#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int lines, trocou;
    char books[1000][5], aux[5];
    

    while(scanf("%d", &lines) != EOF){
        for(int i = 0; i < lines; i++){
            scanf("%s", books[i]);
        }

        trocou = 1;
        while(trocou){
            trocou = 0;
            
            for(int i = 0; i < lines - 1; i++){
                if(strcmp(books[i], books[i + 1]) > 0){
                    strcpy(aux, books[i]);
                    strcpy(books[i], books[i + 1]);
                    strcpy(books[i + 1], aux);
                    trocou = 1;
                }
            }
        }

        for(int i = 0; i < lines; i++){
            printf("%s\n", books[i]);
        }

    }

    return 0;
}