/**
* @file 2632.c
*
* Created on 2025-03-11 at 18:57:08
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
    int dano[4] = {200, 300, 400, 100};

    int raio[4][3] = {
        {20, 30, 50},
        {10, 25, 40},
        {25, 55, 70},
        {18, 38, 60}
    };

    int tt;
    scanf("%d", &tt);
    while (tt--) {
        int w, h, x0, y0;
        scanf("%d %d %d %d%*c", &w, &h, &x0, &y0);

        char magia[10];
        int n, cx, cy;  
        scanf("%s %d %d %d", magia, &n, &cx, &cy);

        int id;
        if (strcmp(magia, "fire") == 0) id = 0;
        else if (strcmp(magia, "water") == 0) id = 1;
        else if (strcmp(magia, "earth") == 0) id = 2;
        else if (strcmp(magia, "air") == 0) id = 3;

        if (x0 <= cx && cx <= x0 + w && y0 <= cy && cy <= y0 + h) {
            printf("%d\n", dano[id]);
            continue;
        }

        int r = raio[id][n - 1];

        // cx a esquerda de lb -> dx = x0 - cx >= 0
        // cx a direita de rb -> dx = cx - (x0 + w) >= 0
        // cx entre lb e rb -> dx = 0
        int dx = max(max(x0 - cx, 0), cx - (x0 + w));       

        // analogamente
        int dy = max(max(y0 - cy, 0), cy - (y0 + h));
        
        if (dx * dx + dy * dy <= r * r) printf("%d\n", dano[id]);
        else printf("0\n");
    } 
    
    return 0;
}