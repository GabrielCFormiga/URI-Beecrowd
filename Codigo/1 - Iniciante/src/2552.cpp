/**
* @file 2552.cpp
*
* Created on 2024-10-02 at 01:21:57
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

#define MAX_N 110
#define MAX_M 110

int tab[MAX_N][MAX_M];
int n, m;

int is_pao(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return 0;
    if (tab[i][j] == 9) return 1;
    return 0;
}

void solve(int i, int j) {
    if (tab[i][j] == 9) return;

    int ans = 0;

    ans += is_pao(i, j + 1);    
    ans += is_pao(i, j - 1);
    ans += is_pao(i + 1, j);    
    ans += is_pao(i - 1, j);

    tab[i][j] = ans;
}

int main() { _
    
    while (cin >> n >> m) {

        for (int i = 0; i < n; i++) {
            for (int  j = 0; j < m; j++) {
                cin >> tab[i][j];
                if (tab[i][j] == 1) tab[i][j] = 9;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int  j = 0; j < m; j++) {
                solve(i, j);
                cout << tab[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}