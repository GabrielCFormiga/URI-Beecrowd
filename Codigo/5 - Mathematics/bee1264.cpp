#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int horner(vector<int> &vec, int n){
    int result = vec[0];
    for(int i = 1; i < vec.size(); i++){
        result = result  * n + vec[i];
        result = result % (n - 1);
    }
    return result;
}

int main(){ _
    string r, N;
    while(cin >> r){
        if(r.size() == 1){
            if(r[0] == '0'){
                cout << 2 << endl;
            } else if(r[0] <= '9'){
                cout << r[0] - 48 + 1 << endl;
            } else if(r[0] <= 'Z'){
                cout << r[0] - 'A' + 10 + 1 << endl;
            } else {
                cout << r[0] - 'a' + 36 +  1 << endl;
            }
        } else if(r.size() == 2 && r[0] == '-'){
            if(r[1] == '0'){
                // case -0
                cout << 2 << endl;
            } else if(r[1] <= '9'){
                cout << r[1] - 48 + 1 << endl;
            } else if(r[1] <= 'Z'){
                cout << r[1] - 'A' + 10 + 1 << endl;
            } else {
                cout << r[1] - 'a' + 36 +  1 << endl;
            }
        } else {
            int base = 2;
            int i = 0;
            if(r[0] == '-') i = 1;
            vector<int> vec;
            for(i; i <r.size(); i++){
                if(r[i] <= '9'){
                    vec.pb(r[i] - 48);
                } else if(r[i] <= 'Z'){
                    vec.pb(r[i] - 'A' + 10);
                } else {
                    vec.pb(r[i] - 'a' + 36);
                }

                base = max(base, vec[vec.size() - 1] + 1);
            }

            for(base; base <= 62; base++){
                if(horner(vec, base) == 0) break;
            }

            if(base == 63) cout << "such number is impossible!" << endl;
            else cout << base  << endl;
        }
    
    
    }
     
    return 0;
}