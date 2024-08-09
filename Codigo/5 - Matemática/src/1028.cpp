#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

// use native __gcd or build your own function

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}


int main(){ _
    int tt;
    cin >> tt;
    while(tt--){
        int f1, f2, x;
        cin >> f1 >> f2;
        //x = __gcd(f1, f2);
        x = gcd(f1, f2);
        cout << x << endl;
    }

    return 0;
}