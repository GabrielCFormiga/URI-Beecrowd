#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int tt;
    cin >> tt;
    cin.ignore();
    while(tt--){
        string str;
        int total = 0;
        vector<int> letters(26, 0);
        getline(cin, str);
        for(int i = 0; i < str.size(); i++){
            if(str[i] >= 'a' && str[i] <= 'z' && letters[str[i] - 'a'] == 0){
                letters[str[i] - 'a'] = 1;
                total++;
            }
            if(total == 26) break;
        }

        if(total == 26){
            cout << "frase completa" << endl;
        } else if(total >= 13){
            cout << "frase quase completa" << endl;
        } else {
            cout << "frase mal elaborada" << endl;
        }

    }

    return 0;
}