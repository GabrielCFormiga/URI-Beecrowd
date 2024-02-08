#include <stdio.h>
#include <string.h>

void ZeraArray(int Array[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        Array[i] = 0;
    }
}

int main(){
    char frase[1001];
    int ContaLetras[26];
    int testes, tamanho, contador;

    scanf("%d%*c", &testes);

    while(testes--){
        contador = 0;
        ZeraArray(ContaLetras, 26);
        
        fgets(frase, 1001, stdin);

        tamanho = strlen(frase);

        for(int i = 0; i < tamanho; i++){
            if(frase[i] == 'a'){
                ContaLetras[0] = 1;
            } else if(frase[i] == 'b'){
                ContaLetras[1] = 1;
            } else if(frase[i] == 'c'){
                ContaLetras[2] = 1;
            } else if(frase[i] == 'd'){
                ContaLetras[3] = 1;
            } else if(frase[i] == 'e'){
                ContaLetras[4] = 1;
            } else if(frase[i] == 'f'){
                ContaLetras[5] = 1;
            } else if(frase[i] == 'g'){
                ContaLetras[6] = 1;
            } else if(frase[i] == 'h'){
                ContaLetras[7] = 1;
            } else if(frase[i] == 'i'){
                ContaLetras[8] = 1;
            } else if(frase[i] == 'j'){
                ContaLetras[9] = 1;
            } else if(frase[i] == 'k'){
                ContaLetras[10] = 1;
            } else if(frase[i] == 'l'){
                ContaLetras[11] = 1;
            } else if(frase[i] == 'm'){
                ContaLetras[12] = 1;
            } else if(frase[i] == 'n'){
                ContaLetras[13] = 1;
            } else if(frase[i] == 'o'){
                ContaLetras[14] = 1;
            } else if(frase[i] == 'p'){
                ContaLetras[15] = 1;
            } else if(frase[i] == 'q'){
                ContaLetras[16] = 1;
            } else if(frase[i] == 'r'){
                ContaLetras[17] = 1;
            } else if(frase[i] == 's'){
                ContaLetras[18] = 1;
            } else if(frase[i] == 't'){
                ContaLetras[19] = 1;
            } else if(frase[i] == 'u'){
                ContaLetras[20] = 1;
            } else if(frase[i] == 'v'){
                ContaLetras[21] = 1;
            } else if(frase[i] == 'w'){
                ContaLetras[22] = 1;
            } else if(frase[i] == 'x'){
                ContaLetras[23] = 1;
            } else if(frase[i] == 'y'){
                ContaLetras[24] = 1;
            } else if(frase[i] == 'z'){
                ContaLetras[25] = 1;
            }
        }

        for(int i = 0; i < 26; i++){
            if(ContaLetras[i] == 1){
                contador++;
            }
        }

        if(contador < 13){
            printf("frase mal elaborada\n");
        } else if(contador < 26){
            printf("frase quase completa\n");
        } else {
            printf("frase completa\n");
        }
    }



    return 0;
}