#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int tt;
    cin >> tt;
    while(tt--){
        string a, b, sub;
        cin >> a >> b;
        
        if (a.length() < b.length()){
            cout << "nao encaixa" << endl;
        } else if(a.length() == b.length()){
            if(a == b) cout << "encaixa" << endl;
            else cout << "nao encaixa" << endl;
        } else {
            sub = a.substr(a.length() - b.length(), b.length());
            if(sub == b) cout << "encaixa" << endl;
            else cout << "nao encaixa" << endl;
        }
    }

    return 0;
}