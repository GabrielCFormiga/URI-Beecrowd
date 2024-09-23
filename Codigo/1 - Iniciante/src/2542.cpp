/**
* @file 2542.cpp
*
* Created on 2024-09-22 at 23:42:39
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
#define MAX_L 110

int marcos[MAX_M][MAX_N];
int leo[MAX_L][MAX_N];

int main() { _
    int n, m, l;
    int cm, cl, a;
    while (cin >> n) {
        cin >> m >> l;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> marcos[i][j];
            }
        }

        for (int i = 0; i < l; i++) {
            for (int j = 0; j < n; j++) {
                cin >> leo[i][j];
            }
        }

        cin >> cm >> cl >> a;
        cm--;
        cl--;
        a--;

        if (marcos[cm][a] > leo[cl][a]) cout << "Marcos";
        else if (marcos[cm][a] == leo[cl][a]) cout << "Empate";
        else cout << "Leonardo";
        cout << endl;
    } 
    
    return 0;
}