/**
* @file 1764.cpp
*
* Created on 2025-03-26 at 07:57:36
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

#define MAX_M 40100
#define MAX_N 50100

int n, m;
int p[MAX_M];
int r[MAX_M];

pair<int, pair<int, int>> edges[MAX_N];

int get(int x) {
    return (p[x] == x ? x : p[x] = get(p[x]));
}

void unionn(int x, int y) {
    x = get(x);
    y = get(y);

    if (r[x] == r[y]) r[x]++;

    if (r[x] > r[y]) p[y] = x;
    else p[x] = y;
}

int main() { _
    while (cin >> m >> n && m != 0) {
        for (int i = 0; i < n; i++) cin >> edges[i].second.first >> edges[i].second.second >> edges[i].first;

        sort(edges, edges + n);

        for (int i = 0; i < m; i++) {
            p[i] = i;
            r[i] = 0;
        }

        int sum = 0, k = m - 1;

        for (int i = 0; i < n; i++) {
            if (get(edges[i].second.first) != get(edges[i].second.second)) {
                unionn(edges[i].second.first, edges[i].second.second);
                sum += edges[i].first;
                k--;
            }
            if (k == 0) break;
        }

        cout << sum << endl;
    }    
    
    return 0;
}