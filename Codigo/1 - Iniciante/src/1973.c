#include <stdio.h>

int main(){
    long long unsigned star[100000];
    static long long unsigned ataque[100000]; //0 não atacou 1 atacou
    long long unsigned total_stars, stolen_stars = 0, non_stolen_sheeps = 0, i;

    scanf("%llu", &total_stars);

    for(i = 0; i < total_stars; i++){
        scanf("%llu", &star[i]);
    }

    // lembre que o StarN -> N = i + 1
    for(i = 0; i < total_stars; ){
        if(star[i] % 2 == 1){
            star[i]--;
            ataque[i] = 1;
            i++; 
        } else if(star[i] == 0){
            ataque[i] = 1;
            i--;
        } else {
            star[i]--;
            ataque[i] = 1;
            i--;
        }
    }

    for(i = 0; i < total_stars; i++){
        if(ataque[i] == 1){
            stolen_stars++;
        }

        non_stolen_sheeps += star[i];
    }

    printf("%llu %llu\n", stolen_stars, non_stolen_sheeps);

    return 0;
}