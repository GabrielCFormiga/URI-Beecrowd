#include <stdio.h>
#include <string.h>

int main(){
    int pokemons, contador = 0;
    char pokedex[151][1001] = {0}, nome[1001];

   scanf("%d", &pokemons);

    for(int i = 0; i < pokemons; i++){
        scanf("%s", nome);

        for(int j = 0; j < pokemons; j++){
            if(strcmp(pokedex[j], nome) == 0){
                break;
            }else if(pokedex[j][0] == '\0'){
                strcpy(pokedex[j], nome);
                contador++;
                break;
            }
        }
    }

    printf("Falta(m) %d pomekon(s).\n", 151 - contador);

    return 0;
}