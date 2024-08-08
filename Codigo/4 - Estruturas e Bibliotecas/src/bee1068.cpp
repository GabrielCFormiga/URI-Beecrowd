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
    string s;
    
    while(cin >> s) {
        stack<char> st;
        
        bool correct = true;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') st.push(s[i]);
            
            if(s[i] == ')') {
                if(st.empty()) {
                    correct = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }
        
        if(!st.empty()) correct = false;
        if(correct) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }
    
    return 0;
}
