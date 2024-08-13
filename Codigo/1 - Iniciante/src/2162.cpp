/**
* @file 2162.cpp
*
* Created on 2024-08-12 at 23:55:11
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
    bool padrao = true;
    bool subir;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    if (vec[0] < vec[1]) subir = false;
    else if (vec[0] > vec[1]) subir = true;
    else padrao = false;

    for (int i = 2; i < n; i++) {
        if (!padrao) break;

        if (subir) {
            if (vec[i] <= vec[i - 1]) padrao = false;
            subir = false;
        } else {
            if (vec[i] >= vec[i - 1]) padrao = false;
            subir = true;
        }
    }

    cout << padrao << endl;

    return 0;
};