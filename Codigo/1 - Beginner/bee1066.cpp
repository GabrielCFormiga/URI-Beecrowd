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
    int odd = 0, even = 0, pos = 0, neg = 0;
    int tt = 5;
    while(tt--){
        int x;
        cin >> x;
        if(x % 2 == 0) even++;
        else odd++;

        if(x > 0) pos++;
        if(x < 0) neg++;
    }

    cout << even << " valor(es) " << "par" << "(es)" << endl;
    cout << odd << " valor(es) " << "impar" << "(es)" << endl;
    cout << pos << " valor(es) " << "positivo" << "(s)" << endl;
    cout << neg << " valor(es) " << "negativo" << "(s)" << endl;

    return 0;
}
