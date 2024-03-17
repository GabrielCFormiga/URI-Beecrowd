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
    int x, y;
    while(cin >> x >> y && x != 0 && y != 0) {
        if(x > 0) {
            if(y > 0) cout << "primeiro" << endl;
            else cout << "quarto" << endl;
        } else {
            if(y > 0) cout << "segundo" << endl;
            else cout << "terceiro" << endl;
        }
    }
    
    return 0;
}
