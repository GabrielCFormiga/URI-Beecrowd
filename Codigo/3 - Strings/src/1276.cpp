/**
* @file 1276.cpp
*
* Created on 2024-09-23 at 00:02:17
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
    string linha;
    while (getline(cin, linha)) {
        vector<bool> vis(26);
        vector<string> ans;

        for (int i = 0; i < linha.size(); i++) {
            if (linha[i] == ' ') continue;
            vis[linha[i] - 'a'] = true;
        }

        int j;
        for (int i = 0; i < 26; i++) {
            if (!vis[i]) continue;

            j = i + 1;
            while (j < 26 && vis[j]) j++;

            string curr = "";
            curr += (char) i + 'a';
            curr += ":";
            curr += (char) j - 1 + 'a';
            ans.pb(curr);

            i = j - 1;
        }

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i];
            if (i < ans.size() - 1) cout << ", ";
        }

        cout << endl;
    } 
    
    return 0;
}