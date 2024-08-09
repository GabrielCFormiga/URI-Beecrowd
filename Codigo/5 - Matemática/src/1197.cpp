#include <bits/stdc++.h>
using namespace std;
int main() {
    int v, t;
    while(cin >> v) {
        cin >> t;
        // v = v0 + at
        // S = 0 + 2v0t + 2at^2
        // S = 2vt
        cout << 2 * v * t << endl;
        
    }
 
    return 0;
}