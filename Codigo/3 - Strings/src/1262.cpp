/**
* @file 1262.cpp
*
* Created on 2024-09-04 at 10:14:41
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
    string rastro;
    int p;
    while (cin >> rastro >> p) {
        int i = 0;
        int len = rastro.size();
        
        int d; // calcula o tamanho de cada ciclo
        int cnt = 0; // conta o número de ciclos
        while (i < len) {
            // passa pelos processos de escrita
            while(i < len && rastro[i] == 'W') {
                cnt++;
                i++;
            }

            d = 0; // começa um novo ciclo
            if (i < len) cnt++;
            while (i < len && rastro[i] == 'R') {
                i++;
                d++;
                if (d == p) break;
            }
        }

        cout << cnt << endl;
    }
    
    return 0;
}