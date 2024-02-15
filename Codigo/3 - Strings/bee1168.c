#include <stdio.h>
 
int SomaLeds(const char str[]){
    int soma = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        switch(str[i]){
        case '0':
            soma += 6;
            break;
        case '1':
            soma += 2;
            break;
        case '2':
            soma += 5;
            break;
        case '3':
            soma += 5;
            break;
        case '4':
            soma += 4;
            break;
        case '5':
            soma += 5;
            break;
        case '6':
            soma += 6;
            break;
        case '7':
            soma += 3;
            break;
        case '8':
            soma += 7;
            break;
        case '9':
            soma += 6;
            break;
        default:
            break;
        }
    }

    return soma;
}

int main(){
    int testes, leds;
    char str[102];

    scanf("%d", &testes);

    while(testes--){
        scanf("%s", str);

        leds = SomaLeds(str);

        printf("%d leds\n", leds);
    }
 
    return 0;
}