/**
* @file 2187.cpp
*
* Created on 2024-08-11 at 01:38:09
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
    int teste = 1;
    while (cin >> n && n != 0) {
        cout << "Teste " << teste << endl;
        teste++;

        int i = 0, j = 0, k = 0, l = 0;
        i = n / 50;
        n %= 50;
        j = n / 10;
        n %= 10;
        k = n / 5;
        n %= 5;
        l = n;

        cout << i << ' ' << j << ' ' << k << ' ' << l << endl << endl;
    }
    
    return 0;
};