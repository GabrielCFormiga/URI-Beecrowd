/**
* @file 3346.cpp
*
* Created on 2025-01-28 at 20:41:27
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
    double f1, f2;

    cin >> f1 >> f2;

    double ans = 100;

    ans += ans * f1 / 100;
    ans += ans * f2 / 100;

    cout << fixed << setprecision(6) << ans - 100 << endl;

    return 0;
}