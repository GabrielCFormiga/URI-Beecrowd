/**
* @file 1278.cpp
*
* Created on 2024-08-20 at 00:32:25
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
    int teste = 1;
    while (cin >> n && n != 0) {
        cin.ignore();
        if (teste != 1) cout << endl;
        teste++;
        
        string aux;
        vector<string> texto(n);
        int mx = 0;

        for (int i = 0; i < n; i++) {
            getline(cin, aux);
            string tmp = "";

            int j = 0;
            bool first = true;
            while (j < aux.size()) {
                while (aux[j] == ' ' && j < aux.size()) j++;
                
                if (!first && j < aux.size()) tmp += ' ';
                while (aux[j] != ' ' && j < aux.size()) {
                    if (first) first = false;
                    tmp += aux[j];
                    j++;
                }
            }

            mx = max(mx, (int)tmp.size());
            texto[i] = tmp;
        }

        for (int i = 0; i < n; i++) {
            cout << setw(mx) << texto[i] << endl;
        }


    }
    return 0;
}