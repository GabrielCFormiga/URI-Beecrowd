/**
* @file 1609.cpp
*
* Created on 2024-09-09 at 18:21:25
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
    int tt, n, cnt;
    cin >> tt;

    while (tt--) {
        cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) cin >> vec[i];

        sort(all(vec));

        cnt = 1;
        for (int i = 1; i < n; i++) {
            if (vec[i] > vec[i - 1]) cnt++;
        }

        cout << cnt << endl;
    }
    
    return 0;
}