/**
* @file 3343.c
*
* Created on 2025-03-15 at 20:38:28
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

#define MAX_N 300100 

char seq[MAX_N];
int walls[MAX_N];

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    scanf(" %s", seq);

    int p, m, g;
    scanf("%d %d %d", &p, &m, &g);

    // r := ultima muralha
    int r = 0;
    walls[0] = x;

    // lim_x := barreira mais distante que o tipo x alcançou
    int lim_p = 0, lim_m = 0, lim_g = 0;

    int life, lim;
    for (int i = 0; i < n; i++) {
        if (seq[i] == 'P') {
            life = p;
            lim = lim_p;
        } else if (seq[i] == 'M') {
            life = m;
            lim = lim_m;
        } else {
            life = g;
            lim = lim_g;
        }

        while (life > 0) {
            if (lim > r) {
                r++;
                walls[r] = x;
            }

            if (life > walls[lim]) lim++;
            else {
                walls[lim] -= life;
                life = 0;
            }
        }

        if (seq[i] == 'P') lim_p = lim;
        else if (seq[i] == 'M') lim_m = lim;
        else lim_g = lim;
    }

    printf("%d\n", r + 1);
    
    return 0;
}