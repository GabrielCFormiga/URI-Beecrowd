/**
* @file 3301.c
*
* Created on 2025-03-11 at 19:26:08
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
    int h, z, l;

    while (scanf("%d %d %d", &h, &z, &l) != EOF) {
        int sum = h + z + l;
        sum -= max(max(h, l), z);
        sum -= min(min(h, l), z);

        if (sum == l) printf("luisinho\n");
        else if (sum == h) printf("huguinho\n");
        else printf("zezinho\n");
    }

    return 0;
}