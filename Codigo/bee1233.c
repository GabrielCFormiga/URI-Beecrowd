#include <stdio.h>
void ZeraArray(int array[], int tam){
    for(int i = 0; i < tam; i++){
        array[i] = 0;
    }
}

int main(){
    int n, estrelas, ok;

    while(scanf("%d", &n) != EOF){
        estrelas = 0;

        int vertices[n]; // quando n for 2e31 - 1 por exemplo não consiguirei criar esse array

        for(int k = 1; k <= n/2; k++){
            ZeraArray(vertices, n);

            for(int i = 0; ;i += k){
                if(i > n){
                    i = i - n;
                }

                if(vertices[i] == 1){
                    break;
                } else {
                    vertices[i] = 1;
                }
            }

            ok = 1;
            for(int j = 0; j < n; j++){
                if(vertices[j] == 0){
                    ok = 0;
                    break;
                }
            }

            estrelas += ok;
        }

        printf("%d\n", estrelas);
    }




    return 0;
}