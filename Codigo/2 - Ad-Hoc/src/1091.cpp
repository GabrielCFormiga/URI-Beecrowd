/**
* @file 1091.cpp
*
* Created on 2024-08-25 at 22:55:25
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
    int k;
    int n, m;
    int x, y;
    while (cin >> k && k != 0) {
        cin >> n >> m;

        while (k--) {
            cin >> x >> y;
            if (x == n || y == m) cout << "divisa" << endl;
            else if (y > m) {
                if (x > n) cout << "NE" << endl;
                else cout << "NO" << endl;
            } else {
                if (x > n) cout << "SE" << endl;
                else cout << "SO" << endl;
            }
        }
    } 
    
    return 0;
}