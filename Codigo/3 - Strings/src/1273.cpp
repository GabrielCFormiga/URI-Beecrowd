/**
* @file 1273.cpp
*
* Created on 2024-09-13 at 01:10:43
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
    int n, mx;
    int teste = 1;

    while (cin >> n && n != 0) {
        if (teste == 1) teste++;
        else cout << endl;
        
        vector<string> vec(n);
        
        mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            mx = max(mx, (int)vec[i].size());
        }

        for (int i = 0; i < n; i++) {
            cout << setw(mx) << vec[i] << endl;
        }
    } 
    
    return 0;
}