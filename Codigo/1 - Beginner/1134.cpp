#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int code;
    int alc = 0, gas = 0, die = 0;
    while(1) {
        cin >> code;
        if(code == 4) break;
        if(code == 1) alc++;
        if(code == 2) gas++;
        if(code == 3) die++;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << die << endl;
    
    return 0;
}
