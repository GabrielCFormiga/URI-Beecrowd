/**
* @file 1332.cpp
*
* Created on 2024-10-02 at 01:38:24
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
    string one = "one";
    string str;
    int tt;
    cin >> tt;
    
    while (tt--) {
        cin >> str;

        if (str.size() == 5) cout << 3 << endl;
        else {
            // verificar se eh "one"
            int diff = 0;
            for (int i = 0; i < str.size(); i++) {
                if (str[i] != one[i]) diff++;
            }

            if (diff <= 1) cout << 1 << endl;
            else cout << 2 << endl;
        }
    } 
    
    return 0;
}