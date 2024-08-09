#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int n;
    while (cin >> n) {
        int ans = 2;
        int val = 11;
        while (val % n != 0) {
            ans++;
            val = val * 10 + 1;
            val %= n;
        } 
        cout << ans << endl;
    }
    
    return 0;
}