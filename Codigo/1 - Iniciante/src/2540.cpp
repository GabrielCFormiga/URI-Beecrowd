/**
* @file 2540.cpp
*
* Created on 2024-09-05 at 23:47:30
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
    int n, x, cnt;
    while (cin >> n) {
        cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 1) cnt++;
        }

        if (cnt >= (int) ceil(2.0 * n / 3)) {
            cout << "impeachment" << endl;
        } else {
            cout << "acusacao arquivada" << endl;
        }
    }
    
    return 0;
}