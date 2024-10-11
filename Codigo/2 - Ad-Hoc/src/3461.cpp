/**
* @file 3461.cpp
*
* Created on 2024-10-11 at 04:03:14
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

// guarda a operacao de cada botao
int op[10] = {
    ((1 << 1) + (1 << 4)),
    ((1 << 0) + (1 << 4) + (1 << 5) + (1 << 2)),
    ((1 << 1) + (1 << 5) + (1 << 6) + (1 << 3)),
    ((1 << 2) + (1 << 6)),
    ((1 << 0) + (1 << 1) + (1 << 5) + (1 << 7)),
    ((1 << 1) + (1 << 2) + (1 << 6) + (1 << 8) + (1 << 7) + (1 << 4)),
    ((1 << 8) + (1 << 5) + (1 << 2) + (1 << 3)),
    ((1 << 4) + (1 << 5) + (1 << 8) + (1 << 9)),
    ((1 << 9) + (1 << 7) + (1 << 5) + (1 << 6)),
    ((1 << 7) + (1 << 8))
};

#define ANS ((1 << 10) - 1)

int get_bit(int x, int j) {
    return x & (1 << j);
}

// retorna true se a for menor lexicograficamente que b
bool eh_menor(int a, int b) {
    if (a == b) return false;
    
    int j = 0;
    while (get_bit(a, j) == get_bit(b, j)) j++;

    return get_bit(a, j);
}

int main() { _
    int bg = 0; // guarda o estado inicial
    
    
    for (int i = 0; i < 10; i++) {
        int aux;
        cin >> aux;
        if (aux) bg |= (1 << i);
    }

    int min = INF;
    int ans = -1;
    for (int mask = 0; mask < (1 << 10); mask++) {
        int aux = bg;
        int cnt = 0;
        for (int i = 0; i < 10; i++) {
            if (mask & (1 << i)) {
                aux ^= op[i];
                cnt++;
            }
        }
        if (aux == ANS) {
            if (cnt < min) {
                min = cnt;
                ans = mask;
            } else if (cnt == min && eh_menor(mask, ans)) {
                ans = mask;
            }
        }
    }

    if (ans == -1) cout << -1 << endl;
    else {
        cout << min << endl;
        bool first = true;
        for (int i = 0; i < 10; i++) {
            if (ans & (1 << i)) {
                if (first) first = false;
                else cout << " ";
                cout << i + 1;
            }
        }
        if (min != 0) cout << endl;
    }
    
    return 0;
}