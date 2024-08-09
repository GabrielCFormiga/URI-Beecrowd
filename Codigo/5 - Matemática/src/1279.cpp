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
    bool first = true;
    while(cin >> s) {
        if(first) {
            first = false;
        } else {
            cout << endl;
        }
        
        int len = s.size();
        bool leap = false, huluculu = false, bulukulu = false;
        
        // leap
        int s_mod_10000 = (s[len - 1] - '0') + 10 * (s[len - 2] - '0') 
        + 100 * (s[len - 3] - '0') + 1000 * (s[len - 4] - '0');
        
        if(s_mod_10000 % 4 == 0) leap = true;
        if(s_mod_10000 % 100 == 0) leap = false;
        if(s_mod_10000 % 400 == 0) leap = true;
        
        // huluculu
        // verify for 5
        if(s_mod_10000 % 5 == 0) {
            // verify for 3
            ll sum = 0;
            for(int i = 0; i < len; i++) {
                sum += s[i] - '0';
            }
            if(sum % 3 == 0) huluculu = true;
        }
        
        
        // bulukulu
        if(leap) {
            // verify for 5
            if(s_mod_10000 % 5 == 0) {
                // verify for 11
                ll odd = 0;
                ll even = 0;
                for(int i = len - 1; i >= 0; i -= 2) {
                    even += s[i] - '0';
                }
                for(int i = len - 2; i >= 0; i -= 2) {
                    odd += s[i] - '0';
                }
                
                if((even - odd) % 11 == 0) bulukulu = true;
            }
        }
        
        if(!leap && !bulukulu && !huluculu) cout << "This is an ordinary year." << endl;
        if(leap) cout << "This is leap year." << endl;
        if(huluculu) cout << "This is huluculu festival year." << endl;
        if(bulukulu) cout << "This is bulukulu festival year." << endl;
    }
    
    return 0;
}
