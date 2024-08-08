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
    for(int i = 0; i <= 1; i++) {
        for(int k = 0; k <= 8; k += 2) {
            for(int j = 1 + i; j <= 1 + i + 2; j++) {
                if(k == 0)cout << "I=" << i << " J=" << j << endl;
                else cout << "I=" << i << "." << k << " J=" << j << "." << k << endl;
            }
        }
    }

    for(int j = 3; j <= 5; j++) {
        cout << "I=" << 2 << " J=" << j << endl;
    }



    
    return 0;
}
