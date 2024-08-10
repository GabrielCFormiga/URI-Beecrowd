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
    int tt;
    cin >> tt;
    cin.ignore();
    while(tt--) {
        string str;
        getline(cin, str);

        int len = str.size() / 2;
        string sub1 = str.substr(0, len); 
        string sub2 = str.substr(len, len);
        reverse(all(sub1));
        reverse(all(sub2));
        cout << sub1 << sub2 << endl;
    } 
    
    return 0;
};