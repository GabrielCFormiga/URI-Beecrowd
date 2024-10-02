/**
* @file 2551.cpp
*
* Created on 2024-10-02 at 01:12:53
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

    while (cin >> n) {
        double mx = 0, v;
        int t, d;

        for (int i = 1; i <= n; i++) {
            cin >> t >> d;

            v = (double) d / t;

            if (v > mx) {
                mx = v;
                cout << i << endl;
            }    
        }
    }
    
    return 0;
}