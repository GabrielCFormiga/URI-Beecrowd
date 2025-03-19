/**
* @file 1367.cpp
*
* Created on 2025-03-18 at 13:44:37
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int n;
    
    while (cin >> n && n != 0) {
        vector<int> penalty(26);
        
        char c;
        int tempo, s = 0, p = 0;
        string julgamento;
        
        while (n--) {
            cin >> c >> tempo >> julgamento;
            
            if (julgamento == "correct") {
                s++;
                p += penalty[c - 'A'] + tempo;
            } else {
                penalty[c - 'A'] += 20;
            }
        }
        
        cout << s << ' ' << p << endl;
    }
        
    return 0;
}