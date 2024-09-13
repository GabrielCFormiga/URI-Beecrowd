/**
* @file 1307.cpp
*
* Created on 2024-09-13 at 08:57:29
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
    string s1, s2;
    int x1, x2, l;
    int tt;
    cin >> tt;

    for (int t = 1; t <= tt; t++) {
        cout << "Pair #" << t << ": ";

        cin >> s1 >> s2;
        x1 = x2 = 0;

        int fat = 1;
        for (int i = s1.size() - 1; i >= 0; i--) {
            x1 += fat * (s1[i] - '0');
            fat *= 2; 
        }

        fat = 1;
        for (int i = s2.size() - 1; i >= 0; i--) {
            x2 += fat * (s2[i] - '0');
            fat *= 2; 
        }

        l = __gcd(x1, x2);
        if (l > 1) {
            cout << "All you need is love!" << endl;
        } else {
            cout << "Love is not all you need!" << endl;
        }

    } 
    
    return 0;
}