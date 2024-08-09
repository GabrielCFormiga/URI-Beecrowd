#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int n;
    cin >> n;
    double p = n / log(n);
    double m = 1.25506 * p;

    cout << fixed << setprecision(1) << p << ' ' << m << endl;
    
    return 0;
}