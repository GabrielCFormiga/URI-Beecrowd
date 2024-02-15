#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

ll MOD = 1000000007;

ll power(ll a, ll exp) {
    ll result = 1;
    while(exp > 0) {
        if(exp % 2 == 1) result = (result * a) % MOD;
        a  = (a * a) % MOD;
        exp /= 2;
    }
    return result;
}

int main(){ 
    string str;
    while(cin >> str){
        vector<ll> freq(26, 0);
        ll perms = 1;
        for(int i = 0; i < str.size(); i++){
            freq[str[i] - 'A']++;
            perms = (perms * (i + 1)) % MOD;
        }        

        //cout << "PERMS = " << perms << endl; 

        for(int i = 0; i < freq.size(); i++){
            if(freq[i] > 1) {
                for(int j = 2; j <= freq[i]; j++){
                    ll inv = power(j, MOD - 2);
                    perms = (perms * inv) % MOD;
                }
            }
        }
        cout << perms << endl;
    }

    return 0;
}