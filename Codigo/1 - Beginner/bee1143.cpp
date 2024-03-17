#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << i << ' ' << i * i << ' ' << i * i * i << endl;
    }
    
    return 0;
}
