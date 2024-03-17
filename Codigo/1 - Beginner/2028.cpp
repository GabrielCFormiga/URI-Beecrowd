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
    int i = 1;
    while(cin >> n) {
        int total = 1 + (1 + n) * n / 2;
        cout << "Caso " << i << ": " << total << " numero";
        if(total > 1) cout << 's';
        cout << endl;

        if(total == 1) {
            cout << 0 << endl;
            cout << endl;
            i++;
            continue;
        } else {
            cout << "0 ";
        }

        for(int i = 0; i <= n; i++) {
            for(int j = 0; j < i; j++) {
                cout << i;
                if(i == n && j == i - 1) cout << endl;
                else cout << ' ';
            }
        }
        cout << endl;
        i++;
    }
    
    return 0;
}
