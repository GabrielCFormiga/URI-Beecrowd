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
    char op;
    double x, sum = 0;
    cin >> op;
    
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> x;
            if(j > i && j + i < 11) sum += x;
        }
    }

    double media = sum / 30;

    cout << fixed << setprecision(1);
    if(op == 'S') cout << sum << endl;
    else cout << media << endl;
    
    return 0;
}
