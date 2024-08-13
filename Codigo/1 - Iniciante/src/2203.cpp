/**
* @file 2203.cpp
*
* Created on 2024-08-13 at 13:52:10
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
    int xf, yf, xi, yi, vi, r1, r2;
        while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2) {
            int dx = xi - xf;
            int dy = yi - yf;
            double d = sqrt(dx * dx + dy * dy);

            if (r1 + r2 >= d + vi * 1.5) cout << "Y" << endl;
            else cout << "N" << endl;
        }

    return 0;
};