/**
* @file 2635.c
*
* Created on 2025-03-16 at 22:47:14
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
#define MAX_LEN 110

bool valido(char *str, char *substr) {
    for (int i = 0; i < strlen(substr); i++) {
        if (str[i] != substr[i]) return 0;
    }
    return 1;
}

int n;

char historico[MAX_N][MAX_LEN];
int main() { 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf(" %s", &historico[i]); 

    int q;
    scanf("%d", &q);

    char consulta[100];
    while (q--) {
        scanf(" %s", consulta);
        int cnt = 0, mx = 0;

        for (int i = 0; i < n; i++) {
            if (strlen(historico[i]) >= strlen(consulta) && valido(historico[i], consulta)) {
                cnt++;
                mx = max(mx, strlen(historico[i]));
            }
        }

        if (cnt == 0) printf("-1\n");
        else printf("%d %d\n", cnt, mx);
    }
    
    return 0;
}