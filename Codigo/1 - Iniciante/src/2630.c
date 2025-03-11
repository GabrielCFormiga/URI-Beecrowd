/**
* @file 2630.c
*
* Created on 2025-03-11 at 13:10:06
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
    int tt;
    scanf("%d", &tt);
    for (int t = 1; t <= tt; t++) {
        printf("Caso #%d: ", t);

        char type[10];
        int r, g, b;

        scanf("%*c%s %d %d %d", type, &r, &g, &b);

        if (strcmp(type, "eye") == 0) {
            printf("%d\n", (30 * r + 59 * g + 11 * b) / 100);
        } else if (strcmp(type, "mean") == 0) {
            printf("%d\n", ((r + g + b) / 3));
        } else if (strcmp(type, "min") == 0) {
            printf("%d\n", (min(min(r, g), b)));
        } else if (strcmp(type, "max") == 0) {
            printf("%d\n", (max(max(r, g), b)));
        }
    }
    
    return 0;
}