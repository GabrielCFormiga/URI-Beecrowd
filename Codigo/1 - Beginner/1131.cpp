#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int count = 0;
    int inter = 0, gremio = 0, empate = 0;
    while(1) {
        int i, g , op;
        cin >> i >> g;
        count++;
        if(i > g) inter++;
        else if(i == g) empate++;
        else gremio++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> op;
        if(op == 2) break;
    }

    cout << count << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empate << endl;
    if(inter > gremio) cout << "Inter venceu mais" << endl;
    else if(inter == gremio) cout << "Nao houve vencedor" << endl;
    else cout << "Gremio venceu mais" << endl;
    
    return 0;
}
