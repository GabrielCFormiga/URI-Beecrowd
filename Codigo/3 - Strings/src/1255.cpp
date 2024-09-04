/**
* @file 1255.cpp
*
* Created on 2024-09-04 at 17:26:18
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
    int tt, mx;
    string linha;
    cin >> tt;

    cin.ignore();
    while (tt--) {
        getline(cin, linha);
        vector<int> vis(26);

        mx = 0;
        for (int i = 0; i < linha.size(); i++) {
            if (linha[i] >= 'A' && linha[i] <= 'Z') {
                mx = max(mx, ++vis[linha[i] - 'A']);
            } else if (linha[i] >= 'a' && linha[i] <= 'z') {
                mx = max(mx, ++vis[linha[i] - 'a']);
            }
        }

        // exibe as letras que mais apareceram
        for (int i = 0; i < 26; i++) {
            if (vis[i] == mx) cout << (char)('a' + i);
        }
        cout << endl;
    } 
    
    return 0;
}