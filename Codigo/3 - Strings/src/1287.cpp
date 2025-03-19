/**
* @file 1287.cpp
*
* Created on 2025-03-19 at 13:56:15
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
const ll MAX_INT = 2147483647;

int main() { _
    string str;

    while (getline(cin, str)) {
        if (str == "") {
            cout << "error" << endl;
            continue;
        }
        
        vector<char> ans;
        bool error = false;

        for (char c : str) {
            if (c >= '0' && c <= '9') ans.pb(c);
            else if (c == 'O' || c == 'o') ans.pb('0');
            else if (c == 'l') ans.pb('1');
            else if (!(c == ' '|| c == ',')) {
                error = true;
                break;
            }
        }
        
        if (ans.size() == 0) {
            cout << "error" << endl;
            continue;
        }

        ll fat = 1;
        ll num = 0;
        for (int i = ans.size() - 1; i >= 0; i--) {
            num += fat * (ans[i] - '0');
            fat *= 10;
            if (num > MAX_INT) break;
        }

        if (error || num > MAX_INT) cout << "error" << endl;
        else cout << num << endl;
    }
    
    return 0;
}