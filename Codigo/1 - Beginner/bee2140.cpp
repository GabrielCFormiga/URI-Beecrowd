#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main() {
    vector<int> notas = {2, 5, 10, 20, 50, 100};
    vector<int> candidatos;

    for (int i = 0; i < notas.size(); i++) {
        for (int j = i; j < notas.size(); j++) {
            candidatos.pb(notas[i] + notas[j]);
        }
    }

    int n, m;
    while(cin >> n >> m && m != 0) {
        int troco = m - n;
        bool possivel = false;

        for (int i = 0; i < candidatos.size(); i++) {
            if (troco == candidatos[i]) {
                possivel = true;
                break;
            }
        }

        if (possivel) cout << "possible" << endl;
        else cout << "impossible" << endl;
    } 
    
    return 0;
};