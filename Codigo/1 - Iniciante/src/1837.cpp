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
    // a = b * q + r

    int a, b;
    cin >> a >> b;

    if(a % b == 0) {
        cout << a / b << ' ' << 0 << endl;
        return 0;
    }

    if(a >= 0 && b >= 0) {
        cout << a / b << ' ' << a % b << endl;
    }

    if(a >= 0 && b < 0) {
        b = -b;
        int q = a / b;
        int r = a % b;
        q = -q;
        cout << q << ' ' << r << endl;
    }

    if(a < 0 && b >= 0) {
        a = -a;
        int q = a / b;
        q++;
        int r = b * q - a;
        q = -q;
        cout << q << ' ' << r << endl;
    }

    if(a < 0 && b < 0) {
        a = -a;
        b = -b;
        int q = a / b;
        q++;
        int r = b * q - a;
        cout << q << ' ' << r << endl;
    }

    return 0;
}
