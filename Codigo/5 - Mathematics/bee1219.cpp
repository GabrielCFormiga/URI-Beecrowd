#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
const double PI = 3.1415926535897;

int main(){ _
    double a, b, c;
    
    cout << fixed << setprecision(4);
    while(cin >> a >> b >> c) {
        double p = (a + b + c) / 2;
        double tri = sqrt(p * (p - a) * (p - b) * (p - c));
        double r = tri / p;
        double R = (a * b * c) / (4 * tri);
        double Mcirc = PI * R * R;
        double mcirc = PI * r * r;

        double roses = mcirc;
        double violets = tri - mcirc;
        double sunflowers = Mcirc - tri;

        cout << sunflowers << " " << violets << " " << roses << endl;
    }
    
    return 0;
}
