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
    int tt;
    cin >> tt;
    cout << fixed << setprecision(1);
    while(tt--) {
        int x, y;
        cin >> x >> y;
        if(y == 0) cout << "divisao impossivel" << endl;
        else cout << (float)x / y << endl;
    }
    
    return 0;
}
