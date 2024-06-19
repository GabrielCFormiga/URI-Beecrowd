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
        stack<int> a, b, e;
        vector<int> ans(n);
        vector<int> vec(n);
        
        // create a
        for(int i = 0; i < n; i++) {
            char c;
            cin >> c;
            vec[i] = c - 'a';
        }
        
        for(int i = n - 1; i >= 0; i--) {
            a.push(vec[i]);
        }
        
        // read answer
        for(int i = 0; i < n; i++) {
            char c;
            cin >> c;
            ans[i] = c - 'a';
        }
        
        int pos_mx = 0;
        string output = "";
        
        while(!a.empty()) {
            if(!a.empty() && a.top() == ans[pos_mx]) {
                a.pop();
                b.push(ans[pos_mx]);
                pos_mx++;
                output += "IR";
            } else if (!e.empty() && e.top() == ans[pos_mx]) {
                e.pop();
                b.push(ans[pos_mx]);
                pos_mx++;
                output += "R";
            } else if(!a.empty()) {
                e.push(a.top());
                a.pop();
                output += "I";
            }
        }
        
        bool possible = true;
        while(!e.empty()) {
            b.push(e.top());
            e.pop();
            
            if(b.top() != ans[b.size() - 1]) {
                possible = false;
                break;
            }
            
            output += "R";
        }
        
        
        if(possible) cout << output << endl;
        else cout << output << " Impossible" << endl;
        
    }
    
    return 0;
}
