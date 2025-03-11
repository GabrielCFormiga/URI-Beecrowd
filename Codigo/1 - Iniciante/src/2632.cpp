/**
* @file 2632.cpp
*
* Created on 2025-03-11 at 13:22:52
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
    map<string, int> id;
    id["fire"] = 0;
    id["water"] = 1;
    id["earth"] = 2;
    id["air"] = 3;

    int dano[4] = {200, 300, 400, 100};

    int raio[4][3] = {
        {20, 30, 50},
        {10, 25, 40},
        {25, 55, 70},
        {18, 38, 60}
    };

    int tt;
    cin >> tt;
    while (tt--) {
        int w, h, x0, y0;
        cin >> w >> h >> x0 >> y0;

        string magia;
        int n, cx, cy;  
        cin >> magia >> n >> cx >> cy;

        if (x0 <= cx && cx <= x0 + w && y0 <= cy && cy <= y0 + h) {
            cout << dano[id[magia]] << endl;
            continue;
        }

        int r = raio[id[magia]][n - 1];

        // cx a esquerda de lb -> dx = x0 - cx >= 0
        // cx a direita de rb -> dx = cx - (x0 + w) >= 0
        // cx entre lb e rb -> dx = 0
        int dx = max(max(x0 - cx, 0), cx - (x0 + w));       

        // analogamente
        int dy = max(max(y0 - cy, 0), cy - (y0 + h));
        
        if (dx * dx + dy * dy <= r * r) cout << dano[id[magia]] << endl;
        else cout << 0 << endl;
    } 
    
    return 0;
}