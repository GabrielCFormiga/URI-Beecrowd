/**
* @file 2663.c
*
* Created on 2025-03-18 at 12:55:26
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

int cmp(const void *a, const void *b) {
    return *(int *)b - *(int *)a; 
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int ar[n];
    for (int i = 0; i < n; i++) scanf("%d", &ar[i]);

    qsort(ar, n, sizeof(int), cmp);

    int last = k - 1;

    while (last + 1 < n && ar[last + 1] == ar[last]) last++;

    printf("%d\n", last + 1);

    return 0;
}