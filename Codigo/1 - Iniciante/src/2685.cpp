/**
* @file 2685.cpp
*
* Created on 2025-03-18 at 13:20:33
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
    int m;

    while (cin >> m) {
        string ans;
        if (m < 90) ans = "Bom Dia!!";
        else if (m < 180) ans = "Boa Tarde!!";
        else if (m < 270) ans = "Boa Noite!!";
        else if (m < 360) ans = "De Madrugada!!";
        else ans = "Bom Dia!!"; 

        cout << ans << endl;
    }
    
    return 0;
}