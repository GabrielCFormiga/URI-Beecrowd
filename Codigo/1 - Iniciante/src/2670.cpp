/**
* @file 2670.cpp
*
* Created on 2025-03-18 at 13:09:27
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
    int andar[3];

    for (int i = 0; i < 3; i++) cin >> andar[i];

    int ans = INF;
    for (int i = 0; i < 3; i++) {
        int curr = abs(i - 0)*andar[0] + abs(i - 1)*andar[1] + abs(i - 2)*andar[2];
        ans = min(ans, 2*curr);
    }

    cout << ans << endl;
}