/**
* @file 2161.cpp
*
* Created on 2024-08-10 at 12:44:31
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
    
    double ans = 3;
    double soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += 6;
        soma = 1 / soma;
    }

    ans += soma;

    cout << fixed << setprecision(10) << ans << endl;
    
    return 0;
};