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

int main() { 
    string str;
    while(getline(cin, str)) {
        bool M = true;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] != ' ') {
                if (M) {
                    if (str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 'a' + 'A';
                    M = false;
                } else {
                    if (str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
                    M = true;
                }
            }
        }

        cout << str << endl;
    } 
    
    return 0;
};