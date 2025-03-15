/**
* @file 3306.c
*
* Created on 2025-03-15 at 18:49:45
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

#define MAX_N 100100

int n, q;
int ar[MAX_N];

int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

int main() {
    while (scanf("%d %d", &n, &q) != EOF) {

        for (int i = 1; i <= n; i++) {
            scanf("%d", &ar[i]);
        }

        int op, a, b, v, ans;

        while (q--) {
            scanf("%d %d %d", &op, &a, &b);
            
            if (op == 1) {
                scanf("%d", &v);
                for (int i = a; i <= b; i++) ar[i] += v;
            } else {
                ans = ar[a];
                for (int i = a + 1; i <= b; i++) ans = gcd(ans, ar[i]);
                printf("%d\n", ans);
            }
        }
    }
        
    return 0;
}