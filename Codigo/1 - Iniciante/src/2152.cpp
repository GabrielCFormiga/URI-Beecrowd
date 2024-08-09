#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int tt;
    cin >> tt;
    while(tt--) {
        int h, m, o;
        cin >> h >> m >> o;
        cout << setfill('0') << setw(2) << h 
        << ":" 
        << setfill('0') << setw(2) << m 
        << " - A porta " << (o == 1 ? "abriu!" : "fechou!") << endl;
    }
    
    return 0;
}