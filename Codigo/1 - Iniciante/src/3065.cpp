/**
* @file 3065.CPP
*
* Created on 2024-08-11 at 15:35:34
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
    int m;
    int testes = 1;
    while (cin >> m && m!= 0) {
        cout << "Teste " << testes << endl;
        testes++;

        int soma;
        cin >> soma;
        char op;
        int x;
        while (--m) {
            cin >> op >> x;
            if (op == '+') soma += x;
            else soma -= x;
        }

        cout << soma << endl << endl;
    }
    
    return 0;
};