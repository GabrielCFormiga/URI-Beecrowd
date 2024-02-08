#include <stdio.h>
 
int main(){
    static int ContaX[2000];
    int cases, x;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d", &x);
        ContaX[x - 1]++;
    }

    for(int i = 0; i < 2000; i++){
        if(ContaX[i] != 0){
            printf("%d aparece %d vez(es)\n", i + 1, ContaX[i]);
        }
    }


    return 0;
}