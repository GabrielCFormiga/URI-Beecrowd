/**
* @file 2686.cpp
*
* Created on 2025-03-18 at 13:44:37
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
    double m;
    
    while (cin >> m) {
        m = fmod(m + 90, 360);

        int HH = m * 24 / 360;
        int MM = m * 24 * 60 / 360 - HH * 60;
        int SS = m * 24 * 60 * 60 / 360 - HH * 60 * 60 - MM * 60;

        string ans;
        if (HH < 6) ans = "De Madrugada!!";
        else if (HH < 12) ans = "Bom Dia!!";
        else if (HH < 18) ans = "Boa Tarde!!";
        else if (HH < 24) ans = "Boa Noite!!";
        
        cout << ans << endl; 
        cout << setw(2) << setfill('0') << HH << ":" << setw(2) << setfill('0') << MM  << ":" << setw(2) << setfill('0') << SS << endl;
    }
    
    return 0;
}