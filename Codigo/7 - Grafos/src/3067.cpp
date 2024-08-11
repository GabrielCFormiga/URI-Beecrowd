/**
* @file 3067.cpp
*
* Created on 2024-08-11 at 15:55:23
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

void dfs(int v, vector<bool> &visited, vector<vector<int>> &adj) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u, visited, adj);
        }
    }
}

bool conectado(int V, vector<vector<int>> &adj, vector<int> &degree) {
    vector<bool> visited(V, false);

    // evita escolher uma peça que não existe para iniciar o dfs
    int v = -1;
    for (int i = 0; i < 7; i++) {
        if (adj[i].size()) {
            v = i;
            break;
        }
    }

    if (v == -1) return false;
    dfs(v, visited, adj);

    for (int i = 0; i < V; i++) {
        if (!visited[i] && degree[i] != 0) return false;
    }
    return true;
}

int main() { _
    int n;
    int testes = 1;
    while (cin >> n && n != 0) {
        cout << "Teste " << testes << endl;
        testes++;

        vector<vector<int>> adj(7);
        vector<int> degree(7);
        for (int i = 0; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
            degree[u]++;
            degree[v]++;
        }

        int impares = 0;
        for (int i = 0; i < 7; i++) {
            impares += degree[i] % 2;
        }

        if (impares > 2 || !conectado(7, adj, degree)) cout << "nao" << endl << endl;
        else cout << "sim" << endl << endl;
    } 
    
    return 0;
};