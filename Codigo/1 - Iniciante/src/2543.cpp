/**
* @file 2543.cpp
*
* Created on 2024-09-22 at 23:52:09
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
    int n, I, i, j, cnt;
    while (cin >> n >> I) {
        cnt = 0;

        while (n--) {
            cin >> i >> j;
            if (i == I && j == 0) cnt++;
        }

        cout << cnt << endl;
    } 
    
    return 0;
}