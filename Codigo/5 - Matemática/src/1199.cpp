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
    string str;
    ll x;

    while(cin >> str && str != "-1") {
        if(str.size() > 1 && str[1] == 'x') {
            stringstream stream;
            stream << str;
            stream >> hex >> x;
            cout << dec << x << endl;
            
        } else {
            stringstream stream;
            stream << str;
            stream >> x;
            cout << "0x";
            cout << hex << uppercase << x << endl;
        }
    }
    
    return 0;
}
