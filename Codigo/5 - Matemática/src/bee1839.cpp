#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int mod = 1000000007;
const int MAX_TOTAL = 2500;

ll inv(ll a, ll m){
    return a <= 1 ? a : m - (m / a) * inv(m % a, m) % m;
}

int main(){ _
    vector<ll> fat(MAX_TOTAL + 1);
    fat[1] = 1;
    for(int i = 2; i <= MAX_TOTAL; i++){
        fat[i] = i * fat[i - 1] % mod;
    }


    int rows, cols;
    cin >> rows >> cols;
    vector<vector<char>> grid(rows + 1, vector<char>(cols + 1)); 
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= cols; j++){
            cin >> grid[i][j];
        }
    }
    int xa, ya, xb, yb;
    while(cin >> xa >> ya >> xb >> yb){
        ll free = 0, wall = 0;
        for(int i = xa; i <= xb; i++){
            for(int j = ya; j <= yb; j++){
                if(grid[i][j] == '.')
                    free++;
                else
                    wall++;
            }
        }
        ll total = free + wall;
        if(total == free || total == wall){
            cout << 0 << endl;
        } else {
            ll result = fat[total] * inv(fat[free], mod) % mod;
            result *= inv(fat[wall], mod) % mod;
            cout << result % mod - 1 << endl;
        }
    }

    return 0;
} 