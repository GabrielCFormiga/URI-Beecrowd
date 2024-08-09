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
    int tt;
    cin >> tt;
    while(tt--) {
        string a, b;
        cin >> a >> b;
        
        int lena = a.length() - 1;
        int lenb = b.length() - 1;
        
        if(lenb > lena) {
            cout << "nao encaixa" << endl;
        } else {
            bool encaixa = true;
            
            while(lenb >= 0) {
                if(a[lena] != b[lenb]) {
                    encaixa = false;
                    break;
                }
                lena--;
                lenb--;
            }
            
            if(encaixa) cout << "encaixa" << endl;
            else cout << "nao encaixa" << endl;
        }
    }
    
    return 0;
}
