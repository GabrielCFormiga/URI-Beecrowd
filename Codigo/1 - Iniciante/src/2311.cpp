/**
* @file 2311.cpp
*
* Created on 2024-08-18 at 23:28:13
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
    cin >> n;

    while (n--) {
        string s;
        float gd;
        vector<float> notas(7);

        cin >> s >> gd;
        for (int i = 0; i < 7; i++) cin >> notas[i];
        sort(all(notas));

        float ans = 0;
        for (int i = 1; i < 6; i++) ans += notas[i] * gd;

        cout << s << ' ' << fixed << setprecision(2) << ans << endl;
    }

    return 0;
};