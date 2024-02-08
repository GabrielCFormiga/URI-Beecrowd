#include <stdio.h>
#include <string.h>

int VerificaMaiusc(const char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if('A' <= str[i] && str[i] <= 'Z'){
            return 1;
        }
    }

    return 0;
}

int VerificaMinusc(const char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if('a' <= str[i] && str[i] <= 'z'){
            return 1;
        }
    }

    return 0;
}

int VerificaNumero(const char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if('0' <= str[i] && str[i] <= '9'){
            return 1;
        }
    }

    return 0;
}

int VerificaEspecial(const char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(('0' <= str[i] && str[i] <= '9') == 0 && ('a' <= str[i] && str[i] <= 'z') == 0 && ('A' <= str[i] && str[i] <= 'Z') == 0){
            return 1;
        }
    }

    return 0;
}

void TiraContraBarraN(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
}

int main(){
    char str[60];

    while(fgets(str, 60, stdin) != NULL){
        TiraContraBarraN(str);
        if(VerificaEspecial(str) == 0 && VerificaMaiusc(str) && VerificaMinusc(str) && VerificaNumero(str)){
            if(strlen(str) >= 6 && strlen(str) <= 32){
                printf("Senha valida.\n");
            } else {
                printf("Senha invalida.\n");
            }
        } else {
            printf("Senha invalida.\n");
        }
    }
 
    return 0;
}