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
    while(tt--){
        int l = 0, r = 0;
        string str, sub;
        cin >> str;
        int soma = 0, len = str.length();

        for(l; l < len; l++){
            if(l == len - 1){
                if(str[l] >= '0' && str[l] <= '9'){
                    soma += str[l] - 48;
                    break;
                }
            }

            if(str[l] >= '0' && str[l] <= '9'){
                r = l + 1;
                for(r; r < len; r++){
                    if(r == len - 1){
                       sub = str.substr(l, r + 1 - l);
                       //cout << "sub = " << sub << " stoi = " << stoi(sub) << endl;
                       soma += stoi(sub);
                       l = r;
                       break;
                    }

                    if(str[r] < '0' || str[r] > '9'){
                       sub = str.substr(l, r - l);
                       //cout << "sub = " << sub << " stoi = " << stoi(sub) << endl;
                       soma += stoi(sub);
                       l = r;
                       break;
                    }
                }
            }
        }

        //cout << endl;
        //cout << endl;
        cout << soma << endl;
    }

    return 0;
}