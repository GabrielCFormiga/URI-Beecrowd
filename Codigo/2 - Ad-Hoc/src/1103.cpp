/**
* @file 1103.cpp
*
* Created on 2024-09-09 at 18:09:48
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
    int h1, m1, h2, m2;

    while (cin >> h1 >> m1 >> h2 >> m2 && !(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0)) {
        int t1 = 60 * h1 + m1;
        int t2 = 60 * h2 + m2;

        if (t2 > t1) { 
            cout << t2 - t1 << endl;
        } else {
            cout << 60 * 24 - t1 + t2 << endl;
        }
    } 
    
    return 0;
}