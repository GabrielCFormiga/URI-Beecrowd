/**
* @file 1239.cpp
*
* Created on 2024-08-10 at 02:40:04
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
    int ita = 0;
    int ast = 0;
    while (getline(cin, str)) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '_') {
                if (ita == 0) {
                    cout << "<i>";
                    ita = 1;
                } else {
                    cout << "</i>";
                    ita = 0;
                }
            } else if (str[i] == '*') {
                if (ast == 0) {
                    cout << "<b>";
                    ast = 1;
                } else {
                    cout << "</b>";
                    ast = 0;
                }
            } else {
                cout << str[i];
            }
        }
        cout << endl;
    }
    
    return 0;
};