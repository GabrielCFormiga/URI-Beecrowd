/**
* @file 1105.cpp
*
* Created on 2024-09-13 at 01:00:33
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
    int b, n;
    int d, c, v;

    while (cin >> b >> n && b != 0) {
        vector<int> reservas(b);
        
        for (int i = 0; i < b; i++) cin >> reservas[i];

        while (n--) {
            cin >> d >> c >> v;
            d--;
            c--;
            reservas[d] -= v;
            reservas[c] += v;
        }

        bool ans = true;
        for (int i = 0; i < b; i++) {
            if (reservas[i] < 0) {
                ans = false;
                break;
            }
        }

        cout << (ans ? 'S' : 'N') << endl;
    }
    
    return 0;
}