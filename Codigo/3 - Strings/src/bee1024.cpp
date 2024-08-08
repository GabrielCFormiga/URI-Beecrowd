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
    int tt;
    cin >> tt;
    cin.ignore();
    while(tt--) {
        string s;
        getline(cin, s);

        for(int i = 0; i < s.size(); i++) {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) s[i] = s[i] + 3;
        }

        reverse(all(s));

        for(int i = s.size() / 2; i < s.size(); i++) {
            s[i] = s[i] - 1;
        }

        cout << s << endl;
    }
    
    return 0;
}
