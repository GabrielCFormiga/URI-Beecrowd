/**
* @file 2686.c
*
* Created on 2025-03-18 at 13:57:53
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
    double m;
    
    while (scanf("%lf", &m) != EOF) {
        m = fmod(m + 90, 360);

        int HH = m * 24 / 360;
        int MM = m * 24 * 60 / 360 - HH * 60;
        int SS = m * 24 * 60 * 60 / 360 - HH * 60 * 60 - MM * 60;

        const char *ans;
        if (HH < 6) ans = "De Madrugada!!";
        else if (HH < 12) ans = "Bom Dia!!";
        else if (HH < 18) ans = "Boa Tarde!!";
        else if (HH < 24) ans = "Boa Noite!!";
        
        printf("%s\n", ans);
        printf("%02d:%02d:%02d\n", HH, MM, SS);
    }
    
    return 0;
}