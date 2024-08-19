/**
* @file 1429.cpp
*
* Created on 2024-08-19 at 19:03:09
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

int fat[6];

int main() { _
    fat[0] = 1;
    for (int i = 1; i < 6; i++) fat[i] = i * fat[i - 1];

    string n;
    while (cin >> n && n != "0") {
        int ans = 0;
        int j = 1;
        for (int i = n.size() - 1; i >= 0; i--, j++) {
            ans += fat[j] * (n[i] - '0');
        }
        cout << ans << endl;
    }
    
    return 0;
}