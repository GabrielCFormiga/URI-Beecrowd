/**
* @file 1237.cpp
* Abordagem com O(n^3)
*
* Created on 2024-08-10 at 00:46:40
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
    string s1, s2;
    while(getline(cin, s1)) {
        getline(cin, s2);

        int mx = 0;
        for (int i = 0; i < s1.size(); i++) {
            for (int j = i; j < s1.size(); j++) {
                string sub = s1.substr(i, j - i + 1);
                if (s2.find(sub) != string::npos) mx = max(mx, j - i + 1);
            }
        }

        cout << mx << endl;
    } 
    
    return 0;
};