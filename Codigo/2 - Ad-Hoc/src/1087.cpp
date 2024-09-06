/**
* @file 1087.cpp
*
* Created on 2024-09-05 at 23:56:27
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
    int x1, y1, x2, y2;
    int ans;
    while (cin >> x1 >> y1 >> x2 >> y2 && x1 != 0) {
        if (x1 == x2 && y1 == y2) ans = 0;
        else if (x1 == x2 || y1 == y2 || abs(x2 - x1) == abs(y2 - y1)) ans = 1;
        else ans = 2;
        cout << ans << endl;
    } 
    
    return 0;
}