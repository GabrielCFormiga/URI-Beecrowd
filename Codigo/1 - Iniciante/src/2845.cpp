/**
* @file 2845.cpp
*
* Created on 2024-12-02 at 16:43:33
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

#define MAX_A 100100
#define MAX_ROOT 316

int n, m;

int main() { _
    vector<bool> is_prime(MAX_ROOT + 1, true);
    vector<int> primes;

    primes.pb(2);
    for (int i = 4; i <= MAX_ROOT; i += 2) is_prime[i] = false;

    for (int i = 3; i <= MAX_ROOT; i += 2) {
        if (is_prime[i]) {
            primes.pb(i);
            for (int j = i * i; j <= MAX_ROOT; j += i) is_prime[j] = false;
        }
    }

    // for (auto &p : primes) cout << p << ' ';

    cin >> n;
    
    int mx = 0;
    vector<bool> used_p(MAX_A + 1);
    for (int i = 0; i < n; i++) {
        cin >> m;
        mx = max(mx, m);

        for (auto &p : primes) {
            if (m > p) break;
            if (m % p == 0) used_p[p] = true;
            while (m % p == 0) m /= p;
        }

        if (m > 1) used_p[m] = true;
    }

    vector<int> vec;
    for (int i = 2; i <= MAX_A; i++) {
        if (used_p[i]) vec.pb(i);
    }
    
    bool possible;
    int i;
    for (i = mx + 1; i < INF; i++) {
        possible = true;

        for (auto &p : vec) {
            if (i % p == 0) {
                possible = false;
                break;
            }
        }

        if (possible) break;
    }

    cout << i << endl;

    return 0;
}