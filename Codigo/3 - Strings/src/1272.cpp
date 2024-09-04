/**
* @file 1272.cpp
*
* Created on 2024-09-04 at 17:45:34
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
    int tt;
    string linha;
    cin >> tt;

    cin.ignore();
    while (tt--) {
        getline(cin, linha);

        if (linha[0] != ' ') cout << linha[0];
        for (int i = 1; i < linha.size(); i++) {
            if (linha[i] != ' ' && linha[i - 1] == ' ') cout << linha[i];
        } 
        cout << endl;
    } 
    
    return 0;
}