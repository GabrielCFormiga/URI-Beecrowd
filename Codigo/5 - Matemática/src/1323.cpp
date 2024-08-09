#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;

        // a(n) = 1^2 + 2^2 + 3^2 + ... + n^2
        
        // sol 1:
        // a(n) = n*(n+1)*(2*n + 1)/6
        /*
        int a = n * (n + 1) * (2 * n + 1) / 6;
        cout << a << endl;
        */

        // sol 2:
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i * i;
        }

        cout << sum << endl;
    }

    return 0;
}