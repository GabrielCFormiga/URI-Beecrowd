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
    int a;
    float b;
    char c;
    string d;
    cout << fixed << setprecision(6);
    while(cin >> a) {
        cin >> b >> c;
        cin.ignore();
        getline(cin, d);
        // 6
        cout << a << b << c << d << endl;
        // 7
        cout << a << '\t' << b << '\t' << c << '\t' << d << endl;
        // 8
        cout << setw(10) << a << setw(10) << b << setw(10) << c << setw(10) << d << endl;

    }
    
    return 0;
}
