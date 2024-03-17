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
    int tt;
    cin >> tt;
    while(tt--) {
        int x, y;
        cin >> x >> y;
        if(x > y) swap(x, y);
        int sum = 0;
        for(int i = x + 1; i < y; i++) {
            if(i % 2 == 1) sum += i; 
        }
        cout << sum << endl;
    }
    
    return 0;
}
