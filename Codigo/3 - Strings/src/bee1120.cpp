#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef long long llu;
const int inf  = 1e9 + 10;

int main(){ _ 
    int n;
    string s;

    while(cin >> n >> s && n != 0) {
        bool isZero = true;
        int posFirstNomZero = inf;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '0' + n) s[i] = '*';

            if(s[i] >= '1' && s[i] <= '9') {
                isZero = false;
                posFirstNomZero = min(i, posFirstNomZero);
            }
        }

        if(isZero) cout << 0 << endl;
        else {
            for(int i = posFirstNomZero; i < s.size(); i++) {
                if(s[i] != '*') cout << s[i];
            }
            cout << endl;
        }        
    }
    
    return 0;
}
