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
    cout << fixed << setprecision(2);
    cout << "media = " << (a + b) / 2 << endl;
    
    return 0;
}
