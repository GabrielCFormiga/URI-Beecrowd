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
        string str;
        cin >> str;
        int a1, a2, len = str.length(), i = 2, j = 0;
        for(i; i < len; i++){
            if(str[i] == 'm' && j == 0){
                a1 = i - 1;
                j = i + 3;
                i = j;
            } else {
                if(str[i] == 'm'){
                    a2 = i - j;   
                    break; 
                }
            }
        }

        a1 = a1 * a2;

        cout << "k";
        while(a1--){
            cout << "a";
        }
        cout << endl;
    }

    return 0;
}