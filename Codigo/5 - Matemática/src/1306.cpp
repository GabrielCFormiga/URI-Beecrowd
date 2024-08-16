/**
* @file 1306.cpp
*
* Created on 2024-08-16 at 16:59:43
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
    int r, n;
    int caso = 1;
    while (cin >> r >> n && n!= 0) {
        cout << "Case " << caso++ << ": ";

        // (d + 1) * n >= r -> d + 1 >= r / n;
        int ans;
        if (r % n == 0) {
            ans =  r / n - 1;
        } else {
            ans = r / n;
        }

        if (ans > 26) cout << "impossible" << endl;
        else cout << ans << endl;
    }
};