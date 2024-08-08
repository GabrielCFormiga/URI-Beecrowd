#include <stdio.h>
 
int main(){
    int battles, bonus, attack, defense, level;
    float Dabriel, Guarte;
    
    scanf("%d", &battles);

    while(battles--){
        scanf("%d", &bonus);
        scanf("%d%d%d", &attack, &defense, &level);
        Dabriel = (float)(attack + defense)/2 + bonus*((level%2 + 1)%2);
        scanf("%d%d%d", &attack, &defense, &level);
        Guarte = (float)(attack + defense)/2 + bonus*((level%2 + 1)%2);

        if (Guarte > Dabriel){
            puts("Guarte");
        } else if (Guarte == Dabriel){
            puts("Empate");
        } else {
            puts("Dabriel");
        }
    }
 
    return 0;
}