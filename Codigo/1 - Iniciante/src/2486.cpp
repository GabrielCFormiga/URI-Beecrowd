/**
* @file 2486.cpp
*
* Created on 2024-08-18 at 23:47:42
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
    map<string, int> mp;
    mp["suco de laranja"] = 120;
    mp["morango fresco"] = 85;
    mp["mamao"] = 85;
    mp["goiaba vermelha"] = 70;
    mp["manga"] = 56;
    mp["laranja"] = 50;
    mp["brocolis"] = 34;

    int t, qtd;
    string s;
    while (cin >> t && t != 0) {
        int total = 0;

        while (t--) {
            cin >> qtd;
            cin.ignore();
            getline(cin, s);
            total += qtd * mp[s];
        }

        if (total > 130) {
            cout << "Menos " << total - 130 << " mg" << endl;
        } else if (total < 110) {
            cout << "Mais " << 110 - total << " mg" << endl;
        } else {
            cout << total << " mg" << endl;
        }
    } 
    
    return 0;
};