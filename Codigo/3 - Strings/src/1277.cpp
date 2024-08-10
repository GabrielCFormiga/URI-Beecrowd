/**
* @file 1277.cpp
*
* Created on 2024-08-10 at 02:50:35
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
    while(tt--) {
        int n;
        cin >> n;

        vector<string> names(n);
        for (int i = 0; i < n; i++) {
            cin >> names[i];
        }

        vector<string> ans;
        for (int i = 0; i < n; i++) {
            string freq;
            cin >> freq;

            int cntA = 0;
            int cntP = 0;
            for (int j = 0; j < freq.size(); j++) {
                if (freq[j] == 'A') cntA++;
                else if (freq[j] == 'P') cntP++;
            }

            if ((float) cntP / (cntA + cntP) < 0.75) ans.pb(names[i]); 
        }

        if (ans.empty()) cout << endl;
        else {
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
            }
        }
    } 
    
    return 0;
};