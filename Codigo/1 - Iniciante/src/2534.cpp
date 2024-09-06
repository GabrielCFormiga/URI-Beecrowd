/**
* @file 2534.cpp
*
* Created on 2024-09-05 at 23:22:39
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
    int n, q;
    int pos;
    while (cin >> n >> q) {
        vector<int> notas(n);

        for (int i = 0; i < n; i++) cin >> notas[i];

        sort(all(notas), greater<int>());
        
        while (q--) {
            cin >> pos;
            cout << notas[pos - 1] << endl;
        }
    }
    
    return 0;
}