#include <stdio.h>
 
int main(){
    int array[1000][1000], rows, columns, x = 0, y = 0;

    scanf("%d%d", &rows, &columns);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &array[i][j]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
           if(array[i][j] == 42 && array[i][j - 1] == 7 && array[i][j + 1] == 7 
           && array[i - 1][j] == 7 && array[i - 1][j - 1] == 7 && array[i - 1][j + 1] == 7 
           && array[i + 1][j] == 7 && array[i + 1][j - 1] == 7 && array[i + 1][j + 1] == 7){
            x = i + 1;
            y = j + 1;
           }
        }
    }

    printf("%d %d\n", x, y);
 
    return 0;
}