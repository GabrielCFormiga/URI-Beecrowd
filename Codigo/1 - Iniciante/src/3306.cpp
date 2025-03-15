/**
* @file 3306.cpp
*
* Created on 2025-03-11 at 21:07:28
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

#define MAX_N 100100

int n, q;
int ar[MAX_N];

int main() { _
    while (cin >> n >> q) {

        for (int i = 1; i <= n; i++) {
            cin >> ar[i];
        }

        int op, a, b, v, ans;

        while (q--) {
            cin >> op >> a >> b;
            
            if (op == 1) {
                cin >> v;
                for (int i = a; i <= b; i++) ar[i] += v;
            } else {
                ans = ar[a];
                for (int i = a + 1; i <= b; i++) ans = __gcd(ans, ar[i]);
                cout << ans << endl;
            }
        }
    }
        
    return 0;
}