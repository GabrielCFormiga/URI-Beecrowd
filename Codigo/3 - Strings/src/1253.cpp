/**
* @file 1253.cpp
*
* Created on 2024-09-04 at 16:27:19
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

    string cifra;
    int d;
    while (tt--) {
        cin >> cifra >> d;

        for (int i = 0; i < cifra.size(); i++) {
            cifra[i] = (cifra[i] - d - 'A' + 26) % 26 + 'A';
        }

        cout << cifra << endl;
    } 
    
    return 0;
}