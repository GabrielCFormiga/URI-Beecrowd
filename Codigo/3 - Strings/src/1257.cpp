/**
* @file 1257.cpp
*
* Created on 2024-09-13 at 01:15:25
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
    int tt, l, sum;
    string str;

    cin >> tt;
    while (tt--) {
        cin >> l;
        sum = 0;
        
        for (int i = 0; i < l; i++) {
            cin >> str;

            for (int j = 0; j < str.size(); j++) {
                sum += i + j + str[j] - 'A';
            }
        }

        cout << sum << endl;
    } 
    
    return 0;
}