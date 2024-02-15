#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int mod = 1000007;

ll inv(ll a, ll m){
    return a <= 1 ? a : m - (m / a) * inv(m % a, m) % m;
}

int main(){ _
    ll n;
    ll inv2 = inv(2, mod);
    ll inv12 = inv(12, mod);
    while(cin >> n && n != 0){
        ll a, b, c, d;
        a = n;

        b = n * (n - 1) % mod;
        b = b* 3 * inv2 % mod;

        c = n * (n - 1) % mod;
        c = c * (n - 2) % mod;
        c = c * inv2 % mod;

        d = n * (n - 1) % mod;
        d = d * (n - 2) % mod;
        d = d * (n - 3) % mod;
        d = d * inv12 % mod;

        int ans = (a + b + c + d) % mod;
        cout << ans << endl;
    }

    return 0;
}