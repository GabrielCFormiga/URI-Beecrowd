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
    string s;
    cin >> s;
    
    int len = s.size();
    int dot = -1;
    int firstNomZero = -1;
    int E;
    
    for(int i = 0; i < len; i++) {
        if(s[i] == '.') dot = i;
        if(s[i] > '0' && s[i] <= '9' && firstNomZero == -1) firstNomZero = i;
    }
    
    

    if(dot != -1 && dot < firstNomZero) {
        E = dot - firstNomZero;
    } else if(dot != -1 && dot > firstNomZero) {
        E = dot - firstNomZero - 1;
    } else {
        E = len - firstNomZero - 1;
    }
    
    string ans = "";
    
    for(int i = firstNomZero; i < len; i++) {
        if(s[i] != '.') {
            if(ans.size() == 5 && i != len - 1) {
                if(s[i + 1] >= '5') ans += s[i] + 1;
                else ans += s[i];
                break;
            }
            
            ans += s[i];
            if(ans.size() == 1) ans += '.';
            if(ans.size() == 6) break;
        }
    }
    
    while(ans.size() < 6) ans += '0';
    
    if(s[0] == '-') cout << '-';
    else cout << '+';
    
    
    if(firstNomZero == -1) {
        cout << "0.0000E+00" << endl;
        return 0;
    }
    
    
    cout << ans << 'E';
    
    if(E >= 0) cout << '+';
    else cout << '-';
    
    if(E < 0) E = -E;
    cout << setfill('0') << setw(2) << E << endl;
}
