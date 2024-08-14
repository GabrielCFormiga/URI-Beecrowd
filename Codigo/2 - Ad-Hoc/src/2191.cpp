/**
* @file 2191.cpp
* Implementação O(n) - Kadane`s Algorithm
*
* Created on 2024-08-14 at 13:32:34
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
    int testes = 1;
    while (cin >> n && n != 0) {
        cout << "Teste " << testes << endl;
        testes++;

        int mx = 0;
        int curr = 0;
        int mx_j, mx_i;
        int i = 0;
        for (int j = 0; j < n; j++) {
            int x, y;
            cin >> x >> y;
            curr += x - y;

            if (curr > mx) {
                mx_j = j;
                mx_i = i;
                mx = curr;
            } else if (curr == mx && j - i > mx_j - mx_i) {
                mx_j = j;
                mx_i = i;
            }

            if (curr < 0) {
                curr = 0;
                i = j + 1;
            }
        }

        if (mx == 0) cout << "nenhum" << endl << endl;
        else cout << mx_i + 1 << ' ' << mx_j + 1 << endl << endl;
    }
    
    return 0;
};