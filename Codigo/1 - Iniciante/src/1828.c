#include <stdio.h>
#include <string.h>

int main(){
    int testes;
    char Sheldon[10], Raj[10];

    scanf("%d", &testes);

    for(int i = 1; i <= testes; i++){
        scanf("%s %s", Sheldon, Raj);

        if(strcmp(Sheldon, Raj) == 0){
            printf("Caso #%d: De novo!\n", i);
        } else if(strcmp(Sheldon, "pedra") == 0){
            if(strcmp(Raj, "tesoura") == 0 || strcmp(Raj, "lagarto") == 0){
                printf("Caso #%d: Bazinga!\n", i);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        } else if(strcmp(Sheldon, "papel") == 0){
            if(strcmp(Raj, "Spock") == 0 || strcmp(Raj, "pedra") == 0){
                printf("Caso #%d: Bazinga!\n", i);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        } else if(strcmp(Sheldon, "lagarto") == 0){
            if(strcmp(Raj, "Spock") == 0 || strcmp(Raj, "papel") == 0){
                printf("Caso #%d: Bazinga!\n", i);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        } else if(strcmp(Sheldon, "tesoura") == 0){
            if(strcmp(Raj, "lagarto") == 0 || strcmp(Raj, "papel") == 0){
                printf("Caso #%d: Bazinga!\n", i);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        } else if(strcmp(Sheldon, "Spock") == 0){
            if(strcmp(Raj, "tesoura") == 0 || strcmp(Raj, "pedra") == 0){
                printf("Caso #%d: Bazinga!\n", i);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }

    }

    return 0;
}