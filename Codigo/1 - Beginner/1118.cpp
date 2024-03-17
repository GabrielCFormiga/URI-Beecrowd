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
    double a, b;
    int op;
    cout << fixed << setprecision(2);
    while(1) {
        while(1) {
            cin >> a;
            if(a >= 0 && a <= 10) break;
            else cout << "nota invalida" << endl;
        }
        while(1) {
            cin >> b;
            if(b >= 0 && b <= 10) break;
            else cout << "nota invalida" << endl;
        }

        cout << "media = " << (a + b) / 2 << endl;

        while(1) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> op;
            if(op == 2) return 0;
            if(op == 1) break;
        }
    
    }
}
