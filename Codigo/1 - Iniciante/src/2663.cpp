/**
* @file 2663.cpp
*
* Created on 2025-03-18 at 12:50:34
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
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    sort(vec.rbegin(), vec.rend());

    int last = k - 1;

    while (last + 1 < n && vec[last + 1] == vec[last]) last++;

    cout << last + 1 << endl;
    
    return 0;
}