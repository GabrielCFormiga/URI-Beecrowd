#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const ll mod = 1000000007;

ll inv(ll a, ll b) {
	return a > 1 ? b - inv(b % a, a) * b / a : 1;
}

int main(){ _
    vector<ll> fat(1001);
    fat[0] = 1;
    fat[1] = 1;
    for(int i = 2; i < 1001; i++){
        fat[i] = (fat[i - 1] * i);
        fat[i] %= mod;
    }

    string str;
    while(cin >> str){
        vector<int> freq(26, 0);
        int tam = str.length();
        for(int i = 0; i < tam; i++){
            freq[str[i] - 'A']++;
        }

        ll denom = 1;
        for(int i = 0; i < 26; i++){
            if(freq[i] > 1){
                denom *= inv(fat[freq[i]], mod);
                denom %= mod;
            }
        }

        ll perms = (fat[tam] * denom) % mod;

        cout << perms << endl;
    }

    return 0;
}