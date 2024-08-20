/**
* @file 2502.cpp
*
* Created on 2024-08-20 at 14:06:03
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
    int c, n;
    string s1, s2, linha;
    while (cin >> c >> n) {
        map<char, char> mp;
        cin.ignore();
        getline(cin, s1);
        getline(cin, s2);

        for (int i = 0; i < c; i++) {
            char key = s1[i];
            char value = s2[i];

            if (key >= 'A' && key <= 'Z') key = key - 'A' + 'a';
            if (value >= 'A' && value <= 'Z') value = value - 'A' + 'a';

            mp[key] = value;
            mp[value] = key;
        }

        while (n--) {
            getline(cin, linha);
            for (int i = 0; i < linha.size(); i++) {
                bool M = false; // maiuscula
                char key = linha[i];
                if (key >= 'A' && key <= 'Z') {
                    key = key - 'A' + 'a';
                    M = true;
                }

                auto it = mp.find(key);
                if (it != mp.end()) {
                    char value = it->second;
                    if (M && value >= 'a' && value <= 'z') value = value - 'a' + 'A';
                    linha[i] = value;
                }
            }
            cout << linha << endl;
        }
        cout << endl;
    }

    
    return 0;
}