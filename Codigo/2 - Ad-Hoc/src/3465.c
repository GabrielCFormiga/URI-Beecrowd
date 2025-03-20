/**
* @file 3465.c
*
* Created on 2025-03-20 at 03:30:13
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
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double p = (a + b + c) / 2.0;

    double ans = p * (p - a) * (p - b) * (p - c);
    ans = sqrt(ans);

    printf("%.3lf m2\n", ans);
    
    return 0;
}