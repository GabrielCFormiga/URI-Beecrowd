#include <stdio.h>

int main(){
    char str[4];

    scanf("%c%c%c", &str[0], &str[1], &str[2]);

    if(str[0] == 'O'){
        if(str[1] == 'X' && str[2] == 'X'){
            printf("Alice\n");
        } else {
            printf("?\n");
        }
    } else {
        if(str[1] == 'X'){
            if(str[2] == 'O'){
                printf("Alice\n");
            } else {
                printf("?\n");
            }
        } else {
            if(str[2] == 'O'){
                printf("?\n");
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}