#include <stdio.h>
#include <string.h>

int main(){
    char str1[31];
    char *p, *q;
    
    while(scanf("%s", str1) != EOF){
        for(int i = strlen(str1)/2; i < strlen(str1) ; i++){
            q = str1 + i;
            p = strstr(str1, q);
            
            if(p != q && q - p > str1 + strlen(str1) - 1 - q){
                *q = '\0';
                break;
            }
        }
        
        printf("%s\n", str1);
    }



    return 0;
}