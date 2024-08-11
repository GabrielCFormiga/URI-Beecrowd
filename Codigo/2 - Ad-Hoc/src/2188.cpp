/**
* @file 2188.cpp
*
* Created on 2024-08-11 at 01:46:31
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

struct Square {
    int itl, jtl, ibr, jbr;
};

Square intersec(Square a, Square b) {
    Square c;
    int xOverlap = max(0, min(a.ibr, b.ibr) - max(a.itl, b.itl));
	int yOverlap = max(0, min(a.jtl, b.jtl) - max(a.jbr, b.jbr));

    if (xOverlap == 0 || yOverlap == 0) {
        c.itl = c.jtl = c.ibr = c.jbr = 0;
        return c;
    }
    
    c.itl = max(a.itl, b.itl);
    c.ibr = min(a.ibr, b.ibr);
    c.jtl = min(a.jtl, b.jtl);
    c.jbr = max(a.jbr, b.jbr);
    return c;
}

int main() { _
    int n;
    int teste = 1;
    while (cin >> n && n != 0) {
        cout << "Teste " << teste << endl;
        teste++;

        vector<Square> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i].itl >> vec[i].jtl >> vec[i].ibr >> vec[i].jbr;
        }

        Square ans = vec[0];
        for (int i = 1; i < n; i++) {
            ans = intersec(ans, vec[i]);
            if (ans.itl == ans.ibr) {
                cout << "nenhum" << endl << endl;
                break;
            }
        }

        if (ans.itl != ans.ibr) {
            cout << ans.itl << ' ' << ans.jtl << ' ' << ans.ibr << ' ' << ans.jbr << endl << endl;
        }
        
    }
    
    return 0;
};