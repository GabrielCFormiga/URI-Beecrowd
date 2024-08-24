/**
* @file 2523.cpp
*
* Created on 2024-08-24 at 19:31:03
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
    string s;
    int n, i;
    while (cin >> s) {
        cin >> n;
        string ans = "";
        while (n--) {
            cin >> i;
            i--;
            ans += s[i];
        }
        cout << ans << endl;
    } 
    
    return 0;
}