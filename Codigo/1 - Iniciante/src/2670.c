/**
* @file 2670.c
*
* Created on 2025-03-18 at 13:16:16
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
    int andar[3];

    for (int i = 0; i < 3; i++) scanf("%d", &andar[i]);

    int ans = INF;
    for (int i = 0; i < 3; i++) {
        int curr = abs(i - 0)*andar[0] + abs(i - 1)*andar[1] + abs(i - 2)*andar[2];
        ans = min(ans, 2*curr);
    }

    printf("%d\n", ans);
    
    return 0;
}