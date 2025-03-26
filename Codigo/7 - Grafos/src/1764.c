/**
* @file 1764.c
*
* Created on 2025-03-26 at 08:11:10
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
    int x;
    int y;
    int w;
} Edge;


#define MAX_M 40100
#define MAX_N 50100

int n, m;
int p[MAX_M];
int r[MAX_M];

Edge edges[MAX_N];

int get(int x) {
    if (p[x] == x) return x;
    p[x] = get(p[x]);
    return p[x];
}

void unionn(int x, int y) {
    x = get(x);
    y = get(y);

    if (r[x] == r[y]) r[x]++;

    if (r[x] > r[y]) p[y] = x;
    else p[x] = y;
}

int compare(const void *a, const void *b) {
    Edge *ea = (Edge *)a;
    Edge *eb = (Edge *)b;

    return ea->w - eb->w;
}

int main() {
    while (scanf("%d %d", &m, &n) && m != 0) {
        for (int i = 0; i < n; i++) scanf("%d %d %d", &edges[i].x, &edges[i].y, &edges[i].w);

        qsort(edges, n, sizeof(Edge), compare);

        for (int i = 0; i < m; i++) {
            p[i] = i;
            r[i] = 0;
        }

        int sum = 0, k = m - 1;

        for (int i = 0; i < n; i++) {
            if (get(edges[i].x) != get(edges[i].y)) {
                unionn(edges[i].x, edges[i].y);
                sum += edges[i].w;
                k--;
            }
            if (k == 0) break;
        }

        printf("%d\n", sum);
    }    
    
    return 0;
}