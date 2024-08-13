/**
* @file 2176.cpp
*
* Created on 2024-08-13 at 13:43:48
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
    string s;
    cin >> s;
    
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') cnt++;
    }
    
    cout << s << (cnt % 2 == 0 ? 0 : 1) << endl;

    return 0;
};