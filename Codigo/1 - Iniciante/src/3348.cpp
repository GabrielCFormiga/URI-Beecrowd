/**
* @file 3348.cpp
* "Problema de Turcos e Cristãos"
* 
* Created on 2024-10-02 at 00:45:09
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

ll lcm(ll a, ll b) {
    return a * b / __gcd(a, b);
}

int main() { _
    int n;
    cin >> n;

    ll ans = 1;
    for (int i = n + 1; i <= 2 * n; i++) {
        ans = lcm(ans, i);
    }

    cout << ans << endl;
    
    return 0;
}