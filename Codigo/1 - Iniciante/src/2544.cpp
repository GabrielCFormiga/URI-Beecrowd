/**
* @file 2544.cpp
*
* Created on 2024-09-22 at 23:56:38
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
    int n, cnt;
    while (cin >> n) {
        cnt = 0;
        while (n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        cout << cnt << endl;
    }
    
    return 0;
}