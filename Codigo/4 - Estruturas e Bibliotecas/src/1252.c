/**
* @file 1252.c
*
* Created on 2025-03-19 at 14:10:12
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

#define MAX_N 10100

typedef struct {
    int first;
    int second;
} Pair;

int n, m;
Pair ar[MAX_N]; // num, num % mod

int compare(const void *a, const void *b) {
    Pair *pairA = (Pair *)a;
    Pair *pairB = (Pair *)b;

    if (pairA->second < pairB->second) return -1;
    else if (pairA->second > pairB->second) return 1;
    else {
        if (pairA->first % 2 == 0) {
            if (pairB->first % 2 == 0) {
                // a e b par
                return pairA->first - pairB->first;
            } else {
                // a par e b impar
                return 1;
            }
        } else {
            if (pairB->first % 2 == 0) {
                // a impar e b par
                return -1;
            } else {
                // a e b impar
                return pairB->first - pairA->first;
            }
        }
    }
}

int main() {
    while (scanf("%d %d", &n, &m) == 2) {
        printf("%d %d\n", n, m);
        if (n == 0) break;

        for (int i = 0; i < n; i++) {
            scanf("%d", &ar[i].first);
            ar[i].second = ar[i].first % m;
        }

        qsort(ar, n, sizeof(Pair), compare);

        for (int i = 0; i < n; i++) {
            printf("%d\n", ar[i].first);
        }
    }

    return 0;
}