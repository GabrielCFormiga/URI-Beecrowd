/**
* @file 3301.cpp
*
* Created on 2025-03-11 at 19:20:45
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
    int h, z, l;

    while (cin >> h >> z >> l) {
        int sum = h + z + l;
        sum -= max(max(h, l), z);
        sum -= min(min(h, l), z);

        if (sum == l) cout << "luisinho" << endl;
        else if (sum == h) cout << "huguinho" << endl;
        else cout << "zezinho" << endl;
    }

    return 0;
}