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
    unsigned x, y;
    while(cin >> x >> y) {
        string s1 = bitset<32> (x).to_string();
        string s2 = bitset<32> (y).to_string();
        string s3;
        for(int i = 0; i < 32; i++) {
            if(s1[i] == '1' && s2[i] == '1') {
                s3.pb('0');
            } else if(s1[i] == '0' && s2[i] == '0') {
                s3.pb('0');
            } else {
                s3.pb('1');
            }
        }
        
        int mp = 1;
        unsigned ans = 0;
        for(int i = 31; i >= 0; i--) {
            ans += mp * (s3[i] - '0');
            mp *= 2;
        }
        cout << ans << endl;
    }

    return 0;
}
