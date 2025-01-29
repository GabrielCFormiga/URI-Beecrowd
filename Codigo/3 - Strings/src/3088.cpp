/**
* @file 3088.cpp
*
* Created on 2025-01-28 at 21:17:01
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
    string str;

    while (getline(cin, str)) {
        str += '&';

        for (int i = 1; i < str.size(); i++) {
            if ((str[i] == '.' || str[i] == ',') && str[i - 1] == ' ') continue;
            cout << str[i - 1];
        }

        cout << endl;
    }

    return 0;
}

