/**
* @file 1430.cpp
*
* Created on 2024-08-22 at 02:42:24
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
    map<char, double> mp;
    mp['W'] = 1;
    mp['H'] = 0.5;
    mp['Q'] = 0.25;
    mp['E'] = 0.125;
    mp['S'] = 0.0625;
    mp['T'] = 0.03125;
    mp['X'] = 0.015625;

    string s;
    while (cin >> s && s != "*") {
        int cnt = 0;

        int i = 0;
        int len = s.size();

        double sum;
        while (i < len) {
            if (i == len - 1) break;
            if (s[i] == '/') {
                sum = 0;
                i++;
            }

            while (s[i] != '/') {
                sum += mp[s[i]];
                i++;
            }

            if (sum == 1) cnt++;
        }

        cout << cnt << endl;
    }
    
    return 0;
}