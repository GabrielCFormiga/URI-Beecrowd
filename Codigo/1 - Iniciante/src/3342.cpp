/**
* @file 3342.cpp
*
* Created on 2025-01-28 at 21:05:58
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
    int n;
    cin >> n;

    cout << n * n - n * n / 2 << " casas brancas e " << n * n / 2 << " casas pretas" << endl;

    return 0;
}