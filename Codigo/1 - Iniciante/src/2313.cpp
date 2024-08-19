/**
* @file 2313.cpp
*
* Created on 2024-08-18 at 23:34:27
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
    int a, b, c;
    cin >> a >> b >> c;

    bool valido = false;
    bool isoceles = false;
    bool escaleno = true;
    bool equilatero = false;
    bool retangulo = false;

    if (a + b > c && a + c > b && b + c > a) valido = true;
    if (valido && a == b || a == c || b == c) {
        isoceles = true; 
        escaleno = false;
    }
    if (isoceles && a == b && b == c) equilatero = true;
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a) retangulo = true;

    if (!valido) cout << "Invalido" << endl;
    else {
        cout << "Valido-";
        if (escaleno) cout << "Escaleno";
        else if (equilatero) cout << "Equilatero";
        else cout << "Isoceles";
        cout << endl;

        cout << "Retangulo: ";
        if (retangulo) cout << "S" << endl;
        else cout << "N" << endl;
    }

    return 0;
};