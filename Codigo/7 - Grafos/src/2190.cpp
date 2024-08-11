/**
* @file 2190.cpp
* Minimum Spanning Tree - Kruskal
*
* Created on 2024-08-11 at 03:19:42
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

struct Edge {
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
};

int main() { _
    int n, m;
    int testes = 1;
    while(cin >> n >> m && n != 0) {
        cout << "Teste " << testes << endl;
        testes++;
        
        vector<Edge> edges;
        for (int i = 0; i < m; i++) {
            Edge tmp;
            cin >> tmp.u >> tmp.v >> tmp.weight;
            tmp.u--;
            tmp.v--;
            if (tmp.u > tmp.v) swap(tmp.u, tmp.v);
            edges.pb(tmp);
        }

        int cost = 0;
        vector<int> tree_id(n);
        vector<Edge> result;
        for (int i = 0; i < n; i++)
            tree_id[i] = i;

        sort(edges.begin(), edges.end());

        for (Edge e : edges) {
            if (tree_id[e.u] != tree_id[e.v]) {
                cost += e.weight;
                result.push_back(e);

                int old_id = tree_id[e.u], new_id = tree_id[e.v];
                for (int i = 0; i < n; i++) {
                    if (tree_id[i] == old_id)
                        tree_id[i] = new_id;
                }
            }
        }

        for (int i = 0; i < result.size(); i++) {
            cout << result[i].u + 1 << ' ' << result[i].v + 1 << endl;
        }
        cout << endl;
    } 
    
    return 0;
};