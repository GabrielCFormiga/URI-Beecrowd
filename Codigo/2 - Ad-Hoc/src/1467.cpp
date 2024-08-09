#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int a, b, c;
    while(cin >> a){
        cin >> b >> c;
        if(a == b){
            if(a == c){
                cout << "*" << endl;
            } else {
                cout << "C" << endl;
            }
        } else {
            if(a == c){
                cout << "B" << endl;
            } else {
                cout << "A" << endl;
            }
        }
    }

    return 0;
}