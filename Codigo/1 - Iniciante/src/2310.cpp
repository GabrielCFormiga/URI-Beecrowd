/**
* @file 2310.cpp
*
* Created on 2024-08-14 at 09:27:25
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
    cin >> n;

    string nome;
    int s, b, a;
    int s_tentativas = 0, b_tentativas = 0, a_tentativas = 0;
    int s_sucesso = 0, b_sucesso = 0, a_sucesso = 0;

    while (n--) {
        cin >> nome;
        cin >> s >> b >> a;
        s_tentativas += s;
        b_tentativas += b;
        a_tentativas += a;

        cin >> s >> b >> a;
        s_sucesso += s;
        b_sucesso += b;
        a_sucesso += a;        
    }

    cout << "Pontos de Saque: " << fixed << setprecision(2) << (float) s_sucesso * 100 / s_tentativas << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (float) b_sucesso * 100/ b_tentativas << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (float) a_sucesso * 100 / a_tentativas << " %." << endl;

    return 0;
};