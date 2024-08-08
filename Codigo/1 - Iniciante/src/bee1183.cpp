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
    char op;
    cin >> op;
    float sum = 0;
    float x;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> x;
            if(j > i) sum += x;
        }
    }
    // 144 - 12 = 132
    // 132 / 2 = 66
    cout << fixed << setprecision(1);
    if(op == 'S') cout << sum << endl;
    else cout << sum / 66 << endl;
    
    return 0;
}
