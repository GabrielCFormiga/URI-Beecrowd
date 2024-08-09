#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
const int inf  = 1e9 + 10;

int main(){ _
    double d, vf, vg;
    while(cin >> d >> vf >> vg) {
        double hipotenusa = sqrt(d * d + 12 * 12);
        double tg = hipotenusa / vg;
        double tf = 12 / vf;
        
        if(tg > tf) cout << 'N' << endl;
        else cout << 'S' << endl;
    }
    
    return 0;
}
