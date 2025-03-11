/**
* @file 2630.cpp
*
* Created on 2025-03-11 at 13:04:04
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
    for (int t = 1; t <= tt; t++) {
        cout << "Caso #" << t << ": ";
        
        string type;
        int r, g, b;

        cin >> type >> r >> g >> b;

        if (type == "eye") {
            cout << (30 * r + 59 * g + 11 * b) / 100 << endl;
        } else if (type == "mean") {
            cout << (r + g + b) / 3 << endl;
        } else if (type == "min") {
            cout << min(min(r, g), b) << endl;
        } else if (type == "max") {
            cout << max(max(r, g), b) << endl;
        }
    } 
    
    return 0;
}