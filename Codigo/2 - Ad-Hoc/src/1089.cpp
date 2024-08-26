/**
* @file 1089.cpp
*
* Created on 2024-08-25 at 23:06:04
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
    int n;
    while (cin >> n && n != 0) {    
        vector<int> loop(n);
        for (int i = 0; i < n; i++) {
            cin >> loop[i];
        }

        int cnt = 0;
        bool busca_completa = false;
        int first = -1; // guarda o index do primeiro pico
        int i = 0;
        while (1) {
            if (loop[(i + 1) % n] > loop[i]) {
                // procura um máximo
                while (loop[(i + 1) % n] > loop[i]) {
                    i = (i + 1) % n;
                }
                if (i == first) {
                    busca_completa = true;
                    break;
                }
                cnt++;
                if (first == -1) first = i;
            } else {
                // procura um mínimo
                while (loop[(i + 1) % n] < loop[i]) {
                    i = (i + 1) % n;
                }
                if (i == first) {
                    busca_completa = true;
                    break;
                }
                cnt++;
                if (first == -1) first = i;
            }

            if (busca_completa) break;
        }

        cout << cnt << endl;
    } 
    
    return 0;
}