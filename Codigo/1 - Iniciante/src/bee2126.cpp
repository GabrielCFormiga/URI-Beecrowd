#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
int main() { _
    string s1, s2;
    int caso = 0;

    while(cin >> s1 >> s2) {
        caso++;
        if (caso != 1) cout << endl;
        cout << "Caso #" << caso << ":" << endl;

        int i, j, k;
        int cnt = 0;
        int pos = -1;
        for (k = 0; k <= s2.size() - s1.size(); k++) {
            i = k;
            j = 0;
            while(j < s1.size()) {
                if (s1[j] != s2[i]) break;
                i++;
                j++;
            }
            if (j == s1.size()) {
                cnt++;
                pos = i - j + 1;
            }
        }    

        if (pos == -1) {
            cout << "Nao existe subsequencia" << endl;
        } else {
            cout << "Qtd.Subsequencias: " << cnt << endl;
            cout << "Pos: " << pos << endl;
        }
    }
    
    cout << endl;

    return 0;
} 