/**
* @file 3465.cpp
*
* Created on 2025-03-20 at 03:26:07
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
    int a, b, c;
    cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;

    double ans = p * (p - a) * (p - b) * (p - c);
    ans = sqrt(ans);

    cout << fixed << setprecision(3) << ans << " m2" << endl;
    
    return 0;
}