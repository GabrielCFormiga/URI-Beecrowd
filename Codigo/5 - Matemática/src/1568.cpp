/**
* @file 1568.cpp
*
* Created on 2024-08-19 at 00:28:47
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int limit = 30000001;

int main() { _
    // Crivo de Eratótenes
    vector<int> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    for(int i = 2; (long long)i * i <= limit; i++){
        if(is_prime[i]){
            for(int j = i * i; j <= limit; j += i){
                is_prime[j] = false;
            }
        }
    }

    // Vetor de primos para evitar iterar por fatores não primos
    vector<ll> primes;
    for (int i = 3; i < limit + 1; i++) {
        if (is_prime[i]) primes.pb(i);
    }  

    ll n;
    while (cin >> n) {
        ll res = 1, count;
        while (n % 2 == 0) n /= 2;

        ll j = 0;
        for (ll i = primes[j]; i * i <= n; res *= count + 1, j++) {
            if (j == primes.size()) break;
            i = primes[j];    
            for (count = 0; n % i == 0; n /= i, count++);
        }
        cout << (n == 1 ? res : res * 2) << endl;
    }
    
    return 0;
};