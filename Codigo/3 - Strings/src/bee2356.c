#include <stdio.h>
#include <string.h>

int main(){
    char D[101], S[101];
    
    while(scanf("%s%*c", D) != EOF){ // note que nao precisava de %*c pois \n é considerado caracter branco no scanf para %s
        scanf("%s%*c", S);

        if(strstr(D, S) != NULL){
            printf("Resistente\n");
        } else {
            printf("Nao resistente\n");
        }
    }
    

    return 0;
}