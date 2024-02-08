#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char stra[10000], strb[10000], strr[10001], op;
    int a, b, resultado;

    scanf("%s %c %s", stra, &op, strb);

    for(int i = 0; i < strlen(stra); i++){
        if(stra[i] == '7'){
            stra[i] = '0';
        }
    }

    for(int i = 0; i < strlen(strb); i++){
        if(strb[i] == '7'){
            strb[i] = '0';
        }
    }

    a = atoi(stra);
    b = atoi(strb);

    if(op == 'x'){
        resultado = a * b;
    } else {
        resultado = a + b;
    }

    sprintf(strr, "%d", resultado);

    for(int i = 0; i < strlen(strr); i++){
        if(strr[i] == '7'){
            strr[i] = '0';
        }
    }

    resultado = atoi(strr);

    printf("%d\n", resultado);

    return 0;
}