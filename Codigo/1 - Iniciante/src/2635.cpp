/**
* @file 2635.cpp
*
* Created on 2025-03-16 at 21:54:11
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
    int n;
    cin >> n;

    vector<string> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    int q;
    cin >> q;

    while (q--) {
        string consulta;
        cin >> consulta;
        int cnt = 0, mx = 0;

        for (string s : vec) {
            if (s.find(consulta) == 0) {
                cnt++;
                mx = max(mx, (int)s.size());
            }
        }

        if (cnt == 0) cout << -1 << endl;
        else cout << cnt << " " << mx << endl;
    }
    
    return 0;
}