/**
* @file 1238.cpp
*
* Created on 2024-08-10 at 02:31:24
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
        string a, b;
        cin >> a >> b;

        vector<char> vec;
        int i = 0, j = 0;
        while (1) {
            if (i < a.size()) {
                vec.pb(a[i]);
                i++;
            }
            if (j < b.size()) {
                vec.pb(b[j]);
                j++;
            }

            if (i == a.size() && j == b.size()) break;
        }

        for (int k = 0; k < vec.size(); k++) {
            cout << vec[k];
        }
        cout << endl;
    } 
    
    return 0;
};