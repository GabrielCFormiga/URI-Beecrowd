/**
* @file 3069.cpp
*
* Created on 2024-08-11 at 16:09:50
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
    int p, s;
    int testes = 1;
    while (cin >> p >> s && p != 0) {
        cout << "Teste " << testes++ << endl;
        
        vector<pair<int, int>> intervalos(s); // {inicio, fim}
        for (int i = 0; i < s; i++) cin >> intervalos[i].first >> intervalos[i].second;
        if (s == 1) {
            cout << intervalos[0].first << ' ' << intervalos[0].second << endl << endl;
            continue;
        }

        sort(all(intervalos));

        int l = intervalos[0].first;
        int r = intervalos[0].second;

        vector<pair<int, int>> ans;
        for (int i = 1; i < s; i++) {
            while (i < s && intervalos[i].first <= r) {
                r = max(r, intervalos[i].second);
                i++;
            }

            ans.pb(make_pair(l, r));
            if (i < s) {
                l = intervalos[i].first;
                r = intervalos[i].second;
                if (i == s - 1) ans.pb(make_pair(l, r));
            } 
        }

        for (int i = 0; i < ans.size(); i++) cout << ans[i].first << ' ' << ans[i].second << endl;
        cout << endl;
    } 
    
    return 0;
};