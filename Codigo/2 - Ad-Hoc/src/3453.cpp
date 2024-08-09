#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
const int inf  = 1e9 + 10;

bool isPerfect(ll x) {
    ll sr = sqrt(x);
    return (sr * sr == x);
}

int main(){ _
    ll n, k;
    cin >> n >> k;
    ll m = 2 * n + 1;

    ll q = (4 * n * n - k) / m;
    ll mx = k + q * m;
    while(mx > 0) {
        if(isPerfect(mx) && mx != k) {
            cout << mx << endl;
            break;
        } else{
            mx -= m;
        }
    }

    
    return 0;
}
