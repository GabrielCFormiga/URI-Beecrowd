#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

string decToBin(int n){
    string ans = "";
    while(n!=0){
        int temp = n % 2;
        char c = temp + 48;
        n /= 2;
        ans += c;
    }

    //revert order
    int i = 0, j = ans.size() - 1;
    while(i <= j){
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
    return ans;
}

int main(){ _
    int tt;
    cin >> tt;
    for(int i = 1; i <= tt; i++){
        int n = 0;
        string str, base;
        cin >> str >> base;
        
        cout << dec << "Case " << i << ":" << endl;

        if(base == "dec"){
            istringstream(str) >> dec >> n;
            cout << hex << n << " hex" << endl;
            // bitset method will print 01100101 for example but we want 1100101
            //cout << bitset<8>{n} << " bin" << endl;
            cout << decToBin(n) << " bin" << endl;
        } else if(base == "bin"){
            int aux = pow(2, str.length() - 1);
            for(int j = 0; j < str.length(); j++){   
                n += (str[j] - 48) * aux;
                aux /= 2;
            }
            cout << dec << n << " dec" << endl;
            cout << hex << n << " hex" << endl;       
        } else {
            istringstream(str) >> hex >> n;
            cout << dec << n << " dec" << endl;
            //cout << bitset<8>{n} << " bin" << endl;
            cout << decToBin(n) << " bin" << endl;
        }
        
        cout << endl;
    }

    return 0;
}