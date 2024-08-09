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

int main(){ _
    ll n;
    cin >> n;
    cout << n << endl;

    while(n >= 10) {
        ll l = n / 10;
        ll r = n % 10;
        n = l * 3 + r;
        cout << n << endl;
    }

    return 0;
}
