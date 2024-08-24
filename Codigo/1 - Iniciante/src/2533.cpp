/**
* @file 2533.cpp
*
* Created on 2024-08-24 at 20:37:13
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
        int soma = 0, soma_c = 0;
        int nota, carga;
        
        for (int i = 0; i < n; i++) {
            cin >> nota >> carga;
            soma += nota * carga;
            soma_c += carga;
        }

        cout << fixed << setprecision(4) << (float) soma / (soma_c* 100) << endl;
    }

    return 0;
}