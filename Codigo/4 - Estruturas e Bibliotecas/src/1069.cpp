/**
* @file 1069.cpp
*
* Created on 2024-08-22 at 02:53:10
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;

        stack<char> st;

        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '<') st.push('<');

            if (s[i] == '>' && !st.empty()) {
                st.pop();
                cnt++;
            }
        } 

        cout << cnt << endl;
    }
    
    return 0;
}