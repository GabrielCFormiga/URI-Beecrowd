#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef long long llu;
const int inf  = 1e9 + 10;

int cnt;

int fib(int x) {
    cnt++;
    
    if(x == 0) return 0;
    if(x == 1) return 1;
    return fib(x - 1) + fib(x - 2);
}


int main(){ _ 
    int tt;
    cin >> tt;
    
    while(tt--) {
        int x;
        cin >> x;
        
        cnt = 0;
        int y = fib(x);
        
        cout << "fib(" << x << ") = " << cnt - 1 << " calls = " << y << endl;
    }
    
    return 0;
}
