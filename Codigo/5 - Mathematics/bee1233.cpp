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
    while(cin >> n) {
        int count = 1; // case k = 1
        for(int i = 2; i <= n / 2; i++) {
            if(n % i != 0) count++;
        }
        cout << count << endl;
    }
    
    return 0;
}
