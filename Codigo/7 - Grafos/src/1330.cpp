/**
* @file 1330.cpp
* O(V² + VE)
*
* Created on 2024-08-18 at 22:13:27
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

bool acha_caminho_aumento(int u, vector<vector<int>> &G, vector<int> &emp, vector<int> &vis) {
    for (int v : G[u]) {
        if (vis[v]) continue;

        vis[v] = true;
        if (emp[v] == v || acha_caminho_aumento(emp[v], G, emp, vis)) {
            emp[u] = v;
            emp[v] = u;
            return true;
        }
    }
    return false;
}

int main() { _
    int n, m, k;
    int i, j;
    int v;
    
    while (cin >> n >> m && n != 0) {
        vector<vector<int>> terra(n, vector<int> (m));
        vector<vector<int>> G(n * m); // lista de adj
        vector<int> vis(n * m); // indica se o vértice já foi visitado
        vector<int> emp(n * m); // representação do emparelhamento
        vector<int> A, B; // partições A e B

        cin >> k;
        while (k--) {
            cin >> i >> j;
            i--;
            j--;
            terra[i][j] = 1;
        }

        // constroi o grafo bipartido
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (terra[i][j] == 1) continue; // lago

                v = 4 * i + j;
                if ((i + j) % 2 == 0) A.pb(v);
                else B.pb(v);

                if (i - 1 >= 0 && terra[i - 1][j] != 1) G[v].pb(4 * (i - 1) + j);
                if (i + 1 < n  && terra[i + 1][j] != 1) G[v].pb(4 * (i + 1) + j);
                if (j - 1 >= 0 && terra[i][j - 1] != 1) G[v].pb(4 * i + j - 1);
                if (j + 1 < m  && terra[i][j + 1] != 1) G[v].pb(4 * i + j + 1);
            }
        }

        for (v = 0; v < n * m; v++) emp[v] = v;

        int max_matching = 0;
        for (int v : A) {
            if (emp[v] == v) { // se v é livre
                fill(all(vis), 0);
                if (acha_caminho_aumento(v, G, emp, vis)) max_matching++;
            }
        }

        cout << max_matching << endl;
    }

    return 0;
};