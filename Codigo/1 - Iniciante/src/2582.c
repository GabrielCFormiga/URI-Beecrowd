/**
* @file 2582.c
*
* Created on 2025-03-10 at 21:35:48
* @author GabrielCampelo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

typedef long long ll;
typedef unsigned long long ull;

char tab[11][30] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS"
    };

int main() {
    int tt;
    scanf("%d", &tt);

    while (tt--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%s\n", tab[a + b]);
    } 
    
    return 0;
}