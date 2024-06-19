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

int main(){ _ 
    int n;
    
    while(cin >> n && n != 0) {
        int x;
        while(cin >> x) {
            if(x == 0) {
                cout << endl;
                break;
            }
            
            stack<int> a, e, b;
            a.push(x);
            
            for(int i = 1; i < n; i++) {
                cin >> x;
                a.push(x);
            }
            
            int mx = n;
            while(!a.empty()) {
                if(!a.empty() && a.top() == mx) {
                    a.pop();
                    b.push(mx);
                    mx--;
                } else if (!e.empty() && e.top() == mx) {
                    e.pop();
                    b.push(mx);
                    mx--;
                } else if(!a.empty()) {
                    e.push(a.top());
                    a.pop();
                }
            }
            while(!e.empty()) {
                b.push(e.top());
                e.pop();
            }
            
            bool yes = true;
            for(int i = 1; i <= n; i++) {
                if(b.top() != i) {
                    yes = false;
                    break;
                }
                b.pop();
            }
            
            yes ? cout << "Yes" : cout << "No";
            cout << endl;
        }
    }
    
    return 0;
}
