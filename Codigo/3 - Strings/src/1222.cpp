#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pv push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main() { _
    int n, l, c;
    while (cin >> n >> l >> c) {
        queue<string> q;
        for (int i = 0; i < n; i++) {
            string str;
            cin >> str;
            q.push(str);
        }

        int linha_atual = 0;
        int linhas = 1;
        while (!q.empty()) {
            if (q.front().size() + linha_atual <= c) {
                linha_atual += q.front().size() + 1;
                q.pop();
            } else {
                linhas++;
                linha_atual = 0;
            }
        }

        int ans = ceil((float) linhas / l);
        cout << ans << endl;
    }
    
    return 0;
}; 