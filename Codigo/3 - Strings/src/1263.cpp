/**
* @file 1263.cpp
*
* Created on 2024-09-04 at 17:03:44
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
    string linha;
    while (getline(cin, linha)) {
        // transforma todas as letras em minúsculas
        for (int i = 0; i < linha.size(); i++) {
            if (linha[i] >= 'A' && linha[i] <= 'Z') {
                linha[i] = linha[i] - 'A' + 'a';
            }
        }

        char prev;
        char curr = linha[0];
        char c = ' '; // caractere da aliteração
        int cnt = 0;

        for (int i = 1; i < linha.size(); i++) {
            if (linha[i - 1] == ' ' && linha[i] != ' ') {
                prev = curr;
                curr = linha[i];

                if (prev == curr) {
                    if (curr != c) {
                        // nova aliteração
                        cnt++;
                        c = curr;
                    }
                } else {
                    c = ' ';
                }
            }
        }

        cout << cnt << endl;
    } 
    
    return 0;
}