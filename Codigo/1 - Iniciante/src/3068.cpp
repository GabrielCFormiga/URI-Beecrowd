/**
* @file 3068.cpp
*
* Created on 2024-08-11 at 15:43:37
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

int main() { _
    int xtl, ytl, xbr, ybr;
    int testes = 1;
    while (cin >> xtl >> ytl >> xbr >> ybr && xtl != xbr) {
        cout << "Teste " << testes << endl;
        testes++;

        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            if (x >= xtl && x <= xbr && y <= ytl && y >= ybr) cnt++;
        }

        cout << cnt << endl;
    }
    
    return 0;
};