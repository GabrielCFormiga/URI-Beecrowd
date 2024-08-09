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
    int n, m;
    int x1, y1, x2 ,y2;
    while(cin >> n >> m) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int x;
                cin >> x;
                if(x == 2) {
                    x2 = i; 
                    y2 = j;
                }
                if(x == 1) {
                    x1 = i; 
                    y1 = j;
                }
            }
        }
        cout << abs(x2 - x1) + abs(y2 - y1) << endl;
    }
    
    
    return 0;
}
