/**
* @file 2222.cpp
*
* Created on 2024-10-11 at 04:47:45
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
    int tt;
    int n, len, op, x, y, q;
    
    cin >> tt;
    while (tt--) {
        cin >> n;
        vector<ll> conj(n);
        
        for (int i = 0; i < n; i++) {
            cin >> len;
        
            while (len--) {
                cin >> x;
                conj[i] |= (1LL << x);
            }
        }

        cin >> q;
        while (q--) {
            cin >> op >> x >> y;
            if (op == 1) {
                cout << __builtin_popcountll(conj[x - 1] & conj[y - 1]) << endl;
            } else {
                cout << __builtin_popcountll(conj[x - 1] | conj[y - 1]) << endl;
            }
        }
    } 
    
    return 0;
}