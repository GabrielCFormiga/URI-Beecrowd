/**
* @file 1084.c
*
* Created on 2025-03-23 at 23:50:06
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

typedef struct {
    int mx;
    int index;
} Pair;

#define MAX_N 100100

int n, d;
char str[MAX_N];
Pair deque[MAX_N];
int bg, sz;

int main() {
    while (scanf("%d %d", &n, &d) && n!= 0) {
        bg = 0, sz = 0;

        scanf(" %s", str);

        int escolhas = n - d;

        int i = 0;
        while (escolhas) {
            while (i <= n - escolhas) {
                // insert
                if (sz == 0) {
                    deque[bg].mx = str[i] - '0';
                    deque[bg].index = i;
                    sz++;
                } else {
                    while (sz > 0 && str[i] - '0' > deque[bg + sz - 1].mx) sz--;
                    deque[bg + sz].mx = str[i] - '0';
                    deque[bg + sz].index = i;
                    sz++;
                }

                i++;
            }

            printf("%d", deque[bg].mx);
            escolhas--;
            bg++;
            sz--;
        }

        printf("\n");
    }
    
    return 0;
}