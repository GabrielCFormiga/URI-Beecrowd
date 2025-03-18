/**
* @file 2685.c
*
* Created on 2025-03-18 at 13:24:17
* @author GabrielCampelo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

typedef long long ll;
typedef unsigned long long ull;

int main() { 
    int m;

    while (scanf("%d", &m) != EOF) {
        char *ans;
        if (m < 90) ans = "Bom Dia!!";
        else if (m < 180) ans = "Boa Tarde!!";
        else if (m < 270) ans = "Boa Noite!!";
        else if (m < 360) ans = "De Madrugada!!";
        else ans = "Bom Dia!!";  

        printf("%s\n", ans);
    }
    
    return 0;
}