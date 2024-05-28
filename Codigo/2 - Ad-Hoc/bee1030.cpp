#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
//#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef unsigned long long llu;


int main(){ _
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++) {
        int n, k;
        cin >> n >> k;
        
        // create queue
        queue<int> q;
        for(int i = 1; i <= n; i++) {
            q.push(i);
        }

        while(q.size() != 1) {
            int jumps = 0;
            while(jumps < k - 1) {
                int tmp = q.front();
                q.pop();
                q.push(tmp);
                jumps++;
            }
            q.pop();
        }

        cout << "Case " << t << ": " << q.front() << endl;
    }

    return 0;
}
