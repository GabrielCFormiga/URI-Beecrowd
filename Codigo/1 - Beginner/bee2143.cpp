#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pv push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main() {
    int tt;
    while (cin >> tt && tt != 0) {
        while(tt--) {
            int n;
            cin >> n;
            if (n % 2 == 1) cout << 2 * n - 1 << endl;
            else cout << 2 * n - 2 << endl;
        } 
    }
    
    return 0;
};