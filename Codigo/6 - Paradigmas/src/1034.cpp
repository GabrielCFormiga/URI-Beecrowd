/**
* @file 1034.cpp
* Problema das Moedas / Problema dos Trocos
*
* Created on 2024-09-13 at 01:27:43
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

#define MAX_M 1001000
#define MAX_N 25

int n, m, bloco;
int qb[MAX_M + 1]; // qtd de blocos para chegar no comprimento/index i

int main() { _
    int tt;
    cin >> tt;

    while (tt--) {
        cin >> n >> m;

        for (int i = 0; i <= m; i++) qb[i] = INF;
        qb[0] = 0;
        for (int i = 0; i < n; i++) {
            cin >> bloco;
            for (int i = 0; i <= m; i++) {
                if (qb[i] != INF) {
                    qb[i + bloco] = min(qb[i + bloco], qb[i] + 1);
                }
            }
        }

        cout << qb[m] << endl;
    } 
    
    return 0;
}