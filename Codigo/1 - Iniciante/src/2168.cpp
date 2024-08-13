/**
* @file 2168.cpp
*
* Created on 2024-08-13 at 00:10:11
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

const int MAX_N = 100;
int mapa[MAX_N + 1][MAX_N + 1];

int main() { _
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            cin >> mapa[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int soma = mapa[i][j] + mapa[i + 1][j] + mapa[i][j + 1] + mapa[i + 1][j + 1];
            cout << (soma >= 2 ? 'S' : 'U');
        }
        cout << endl;
    }

    return 0;
};