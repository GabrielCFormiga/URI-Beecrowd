#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int s, x;
    cin >> s;
    x = (s - 1) / 2;

    // prob = ( (2x!) / (x! * x!) ) * pow(0.5, 2x)
    double p;
    double prob = 1;
    for(int i = 0; i <= x - 1; i++){
        p = ( 2 * x - i) * 0.25 / (x - i);
        prob = prob * p;
    }

    prob *= 100;
    cout << fixed << setprecision(2) << prob << endl;

    return 0;
}