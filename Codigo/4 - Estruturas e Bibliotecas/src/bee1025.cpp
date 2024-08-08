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
    int n, q, teste = 1;
    
    while(cin >> n >> q && n != 0) {
        cout << "CASE# " << teste << ':' << endl;
        
        vector<int> vis(10001, -1);
        vector<int> vec(n + 1);
        
        for(int i = 1; i <= n; i++) {
            cin >> vec[i];
        }
        
        sort(all(vec));
        
        for(int i = 1; i <= n; i++) {
            if(vis[vec[i]] == -1) vis[vec[i]] = i;
        }
        
        
        while(q--) {
            int x;
            cin >> x;
            if(vis[x] == -1) cout << x << " not found" << endl;
            else cout << x << " found at " << vis[x] << endl;
        }
        
        teste++;
    }
    
    return 0;
}
