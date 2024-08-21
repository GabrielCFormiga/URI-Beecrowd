/**
* @file 3184.cpp
* Backtracking
*
* Created on 2024-08-21 at 00:46:06
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

#define MAX_N 50
#define MAX_M 50

int n, m;
int cnt;
bool vis[MAX_N][MAX_M];
char grid[MAX_N][MAX_M];

void solve(int x, int y) {
    if (vis[x][y]) return;
    vis[x][y] = true;

    if (grid[x][y] == '#') return;
    if (grid[x][y] == 'G') cnt++;
    if (grid[x + 1][y] == 'T' || grid[x - 1][y] == 'T' || grid[x][y + 1] == 'T' || grid[x][y - 1] == 'T') return;

    solve(x + 1, y);
    solve(x - 1, y);
    solve(x, y + 1);
    solve(x, y - 1);
}

int main() { _
    cin >> m >> n;

    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'P') {
                x = i;
                y = j;
            }
        }
    }

    cnt = 0;
    solve(x, y);
     
    cout << cnt << endl;

    return 0;
}