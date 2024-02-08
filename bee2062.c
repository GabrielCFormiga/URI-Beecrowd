#include <stdio.h>
#include <string.h>

int main(){
    char str[21];
    int palavras;

    scanf("%d", &palavras);

    while(palavras--){
        scanf("%s", str);
        
        if(strlen(str) == 3){
            if(str[0] == 'O' && str[1] == 'B'){
                str[2] = 'I';
                printf("%s%c", str, palavras == 0 ? '\n' : ' '); 
            } else if(str[0] == 'U' && str[1] == 'R'){
                str[2] = 'I';
                printf("%s%c", str, palavras == 0 ? '\n' : ' ');
            } else {
                printf("%s%c", str, palavras == 0 ? '\n' : ' ');
            }
        } else {
            printf("%s%c", str, palavras == 0 ? '\n' : ' ');
        }
    }

    



    return 0;
}