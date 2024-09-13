/**
* @file 1352.cpp
* https://www.youtube.com/watch?v=VsBg2pioaoc
*
* Created on 2024-08-12 at 01:48:12
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
    ll n;
    double p;
    while (cin >> n >> p && n != 0) {
        // (N^2)! bilhetes vendidos
        // premio_total = (p / 100) * (N^2)!
        // premio_individual = premio_total / num_vencedores
        // num_vencedores = (qtd_quadrados * 4!) * (N^2 - 4)!
        // qtd_quadrados = (n^4 - n^2) / 12;
        // .: premio individual = (p / 100) * ((n^2 * (n^2 - 1) * (n^2 - 2) * (n^2 - 3)) / (24 * (n^4 - n^2) / 12))

        ll aux = n * n;
        ll qtd_quadrados = (aux * aux - aux) / 12;

        double ans = aux * (aux - 1) * p / 100; 
        ans *= aux - 2;
        ans = ans / qtd_quadrados;
        ans *= aux - 3; 
        ans = ans / 24;

        cout << fixed << setprecision(2) << ans << endl;
    }
    
    return 0;
};