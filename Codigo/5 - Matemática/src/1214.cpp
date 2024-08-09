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
        int n;
        cin >> n;

        vector<float> vec(n);
        float media = 0;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            media += vec[i];
        }
        media /= n;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i] > media) cnt++;
        }

        cout << fixed << setprecision(3) << (double) cnt * 100 / n << '%' << endl;
    }
    
    return 0;
}