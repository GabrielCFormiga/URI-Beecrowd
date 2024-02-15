#include <stdio.h>
#include <string.h>
 
int EhVogal(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    char str[52], i, j;
    int engracado = 1, tamanho;

    scanf("%s", str);

    tamanho = strlen(str);

    i = 0;
    j = tamanho - 1;

    while(i <= j){
        while(!EhVogal(str[i]) && i < tamanho){
            i++;
        }
        while(!EhVogal(str[j]) && j >= 0){
            j--;
        }

        if(str[i] != str[j]){
            engracado = 0;
            break;
        }
        i++;
        j--;
    }

    printf("%c\n", engracado ? 'S' : 'N');


 
    return 0;
}