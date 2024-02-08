#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    while(1){
        string x, y;
        int count = 0;
        int carry = 0;
        cin >> x >> y;
        if(x == "0" && y == "0") break;

        int i = x.size() - 1;
        int j = y.size() - 1;

        while(i >= 0 || j >= 0){
            int unid = 0;
            if(j >= 0){
                unid += y[j] - 48;
                j--;
            }
            if(i >= 0){
                unid += x[i] - 48;
                i--;
            }

            unid += carry;
            if(unid > 9){
                count++;
                carry = unid / 10;
            } else {
                carry = 0;
            }
        }

        if(count == 0){
            cout << "No carry operation." << endl;
        } else if(count == 1){
            cout << "1 carry operation." << endl;
        } else {
            cout << count << " carry operations." << endl;
        }
    }

    return 0;
}