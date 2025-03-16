/**
* @file 3343.cpp
*
* Created on 2025-03-15 at 18:56:34
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
    int n, x;
    cin >> n >> x;

    string seq;
    cin >> seq;

    int p, m, g;
    cin >> p >> m >> g;

    // r := ultima muralha
    int r = 0;
    vector<int> walls(1, x);

    // lim_x := barreira mais distante que o tipo x alcançou
    int lim_p = 0, lim_m = 0, lim_g = 0;

    int life, lim;
    for (int i = 0; i < seq.size(); i++) {
        if (seq[i] == 'P') {
            life = p;
            lim = lim_p;
        } else if (seq[i] == 'M') {
            life = m;
            lim = lim_m;
        } else {
            life = g;
            lim = lim_g;
        }

        while (life > 0) {
            if (lim > r) {
                r++;
                walls.pb(x);
            }

            if (life > walls[lim]) lim++;
            else {
                walls[lim] -= life;
                life = 0;
            }
        }

        if (seq[i] == 'P') lim_p = lim;
        else if (seq[i] == 'M') lim_m = lim;
        else lim_g = lim;
    }

    cout << r + 1 << endl;
    
    return 0;
}