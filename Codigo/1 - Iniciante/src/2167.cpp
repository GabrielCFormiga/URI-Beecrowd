/**
* @file 2167.cpp
*
* Created on 2024-08-12 at 23:49:16
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
    int prev = -1;
    int curr;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> curr;
        if (curr < prev && ans == 0) ans = i;
        prev = curr;
    }

    cout << ans << endl;
    
    return 0;
};