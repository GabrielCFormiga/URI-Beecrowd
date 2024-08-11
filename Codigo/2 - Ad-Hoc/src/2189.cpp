/**
* @file 2189.cpp
*
* Created on 2024-08-11 at 02:16:56
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
    int n;
    int teste = 1;
    while (cin >> n && n!= 0) {
        cout << "Teste " << teste << endl;
        teste++;

        int ans = 0;
        vector<int> vec(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> vec[i];
            if (i == vec[i]) ans = i;
        }

        cout << ans << endl << endl;
    }
    
    return 0;
};