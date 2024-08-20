/**
* @file 2493.cpp
*
* Created on 2024-08-20 at 13:23:03
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

int main() { 
    int t;
    int x, y, z;
    int index;
    char op;
    char str[55];

while (scanf("%d", &t) != EOF) {
        vector<vector<int>> teste(t, vector<int> (4)); // {+, -, *, I}
        vector<string> ans;

        for (int i = 0; i < t; i++) {
            scanf("%d %d=%d", &x, &y, &z);

            if (x - y == z) teste[i][1] = 1;
            else if (x + y == z || x * y == z) {
                if (x + y == z) teste[i][0] = 1;
                if (x * y == z) teste[i][2] = 1;
            } else teste[i][3] = 1; 
        }

        for (int i = 0; i < t; i++) {
            scanf("%*c%s %d %c", str, &index, &op);

            if (op == '+' && teste[index - 1][0] == 0) ans.pb(string(str));
            else if (op == '-' && teste[index - 1][1] == 0) ans.pb(string(str));
            else if (op == '*' && teste[index - 1][2] == 0) ans.pb(string(str));
            else if (op == 'I' && teste[index - 1][3] == 0) ans.pb(string(str));
        }

        if (ans.size() == 0) {
            printf("You Shall All Pass!\n");
        } else if (ans.size() == t) {
            printf("None Shall Pass!\n");
        } else {
            sort(all(ans));
            for (int i = 0; i < ans.size(); i++) {
                printf("%s%c", ans[i].c_str(), i == ans.size() - 1 ? '\n' : ' ');
            }
        }
        
    } 
    
    return 0;
}