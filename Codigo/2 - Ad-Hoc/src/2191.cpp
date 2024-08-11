/**
* @file 2191.cpp
*
* Created on 2024-08-11 at 02:27:41
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

        vector<int> saldo(n);
        vector<int> prefix(n + 1);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            saldo[i] = x - y;
            prefix[i + 1] = prefix[i] + saldo[i];
        }

        int mx_j, mx_i, mx = 0;
        int soma;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                soma = prefix[j] - prefix[i - 1];
                if (soma > mx) {
                    mx = soma;
                    mx_i = i;
                    mx_j = j;
                } else if (soma == mx) {
                    if (j - i > mx_j - mx_i) {
                        mx_i = i;
                        mx_j = j;
                    }
                }
            }
        }

        if (mx == 0) cout << "nenhum" << endl << endl;
        else cout << mx_i << ' ' << mx_j << endl << endl;
    }
    
    return 0;
};