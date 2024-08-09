#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

vector<bool> sieve(ll n){
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(is_prime[i] && (long long)i * i <= n){
            for(int j = i * i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

string decimalToBinary(int n){   
    string s = bitset<64> (n).to_string(); 
    const auto loc1 = s.find('1'); 
    if(loc1 != string::npos) return s.substr(loc1); 
    return "0"; 
} 

int main(){ _
    ll a, b;
    cin >> a >> b;
    if(a == b){
        cout << '?' << endl;
    } else {
        if(a > b) swap(a, b);
        ll x = b - a;
        vector<bool> primes = sieve(b);
        ll count = 0;
        for(int i = a; i <= b; i++){
            if(primes[i]) count++;
        }

        ll result = x + count - 1;
        // Lucas' theorem
        // if (str2)2 C (str1)2 so the number is odd
        string str1 = decimalToBinary(result);
        string str2 = decimalToBinary(x);
        bool impar = true;
        int j = str1.size() - 1;
        for(int i = str2.size() - 1; i >= 0; ){
            if(str2[i] > str1[j]){
                impar = false;
                break;
            }
            j--;
            i--;
        }
        
        if(count == 0){
            cout << "Bob" << endl;
        } else if(count == 1){
            cout << "Alice" << endl; 
        } else if(!impar){
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl; 
        }
    }

    return 0;
}