#include <stdio.h>
 
int main() {
    int column;
    char opr;
    float array[12][12], soma = 0, media;
    
    scanf("%d%*c%c", &column, &opr);
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &array[i][j]);
        }
    }
    
    for(int i = 0; i < 12; i++){
        soma += array[i][column];
    }
    
    media = soma/12;
 
    switch(opr){
    case 'S':
        printf("%.1f\n", soma);    
        break;
    case 'M':
        printf("%.1f\n", media);
        break;
    default:
        break;
    }
    
    return 0;
}