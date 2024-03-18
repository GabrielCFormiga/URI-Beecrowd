#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

// phi(p^k) = p^k - p^(k - 1)  
unsigned phi(unsigned p, unsigned k){
    unsigned result = 1;
    for(unsigned i = 1; i <= k - 1; i++) {
        result *= p;
    }
    return result * (p - 1);
}

int main(){ _
    unsigned n;
    while(cin >> n) {
        unsigned ans = 1;
        for(unsigned i = 2; i * i <= n; i++) {
            unsigned power = 0;
            bool is_divisor = false;
            while(n % i == 0) {
                is_divisor = true;
                power++;
                n /= i;
            }
            if(is_divisor) ans *= phi(i, power);
        }

        if(n > 1) ans *= (n - 1);

        cout << ans / 2 << endl;
    }
    
    return 0;
}
