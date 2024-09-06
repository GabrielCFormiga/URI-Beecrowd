/**
* @file 1147.cpp
*
* Created on 2024-09-06 at 00:03:46
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int ataque[8][8];
int cnt;
int movs[8][2] = {{-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {1, 2}, {1, -2}};

void set_ataque(int i, int j) {
    if (i + 1 < 8) {
        if (j + 1 < 8) ataque[i + 1][j + 1] = 1;
        if (j - 1 >= 0) ataque[i + 1][j - 1] = 1;
    }
}

void solve(int i, int j) {
    for (int k = 0; k < 8; k++) {
        int x = i + movs[k][0];
        int y = j + movs[k][1];
        if ( x >= 0 && x < 8 && y >= 0 && y < 8 && ataque[x][y] == 0) cnt++;
    }
}

int main() {
    int x, y, x0, y0, teste = 0;
    char d, c;

    while (scanf("%c", &d) && d != '0') {
        teste++;
        scanf("%c%*c", &c);
        x0 = 8 - (d - '0');
        y0 = c - 'a';

        // clear na matriz de posições de ataque
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                ataque[i][j] = 0;
            }
        }

        // leitura dos 8 peões
        for (int i = 0; i < 8; i++) {
            scanf("%c%c%*c", &d, &c);
            //printf("%c%c\n", d, c);
            x = 8 - (d - '0');
            y = c - 'a';

            set_ataque(x, y);
        }

        // cálculo do movimentos
        cnt = 0;
        solve(x0, y0);
        printf("Caso de Teste #%d: %d movimento(s).\n", teste, cnt);
    } 
    
    return 0;
}