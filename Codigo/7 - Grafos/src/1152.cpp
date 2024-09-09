/**
* @file 1152.cpp
* Variação do Kruskal para MST
*
* Created on 2024-09-09 at 00:07:13
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

vector<ll> parent;
vector<ll> rank_val;

void make_set(ll v) {
    parent[v] = v;
    rank_val[v] = 0;
}

ll find_set(ll v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(ll a, ll b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rank_val[a] < rank_val[b])
            swap(a, b);
        parent[b] = a;
        if (rank_val[a] == rank_val[b])
            rank_val[a]++;
    }
}

struct Edge {
    ll u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
};

int main() { _
    ll V, E;

    while (cin >> V >> E && V != 0) {
        ll total = 0;
        vector<Edge> edges(E);
        for (ll i = 0; i < E; i++) {
            cin >> edges[i].u >> edges[i].v >> edges[i].weight;
            total += edges[i].weight;
        }

        // Calcula MST
        ll cost = 0;
        
        parent.resize(V);
        rank_val.resize(V); 
        for (ll i = 0; i < V; i++) make_set(i);

        vector<ll> tree_id(V);
        for (ll i = 0; i < V; i++) tree_id[i] = i;

        sort(edges.begin(), edges.end());

        for (Edge e : edges) {
            if (find_set(e.u) != find_set(e.v)) {
                cost += e.weight;
                
                union_sets(e.u, e.v);
            }
        }

        cout << total - cost << endl;
    }
    
    return 0;
}