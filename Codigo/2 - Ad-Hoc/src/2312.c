/**
* @file 2312.c
*
* Created on 2025-03-20 at 03:16:08
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
    char name[101];
    int a;
    int b;
    int c;
} Country;

int compare(const void *c1, const void *c2) {
    const Country *Country1 = (const Country *)c1;
    const Country *Country2 = (const Country *)c2;

    if (Country1->a != Country2->a)
        return Country2->a - Country1->a;

    if (Country1->b != Country2->b)
        return Country2->b - Country1->b;

    if (Country1->c != Country2->c)
        return Country2->c - Country1->c;

    return strcmp(Country1->name, Country2->name);
}

int main() {
    int n;
    scanf("%d", &n);

    Country ar[n];

    for (int i = 0; i < n; i++) {
        scanf(" %s %d %d %d", ar[i].name, &ar[i].a, &ar[i].b, &ar[i].c);
    }

    qsort(ar, n, sizeof(Country), compare);

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d\n", ar[i].name, ar[i].a, ar[i].b, ar[i].c);
    }

    return 0;
}