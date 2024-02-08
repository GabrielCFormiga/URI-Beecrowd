// This solution is bad and will get WA
// note that int or long long int do not fit all the numbers 

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){ _
    vector<int> m3(201, 0);
    vector<int> m4 = {13, 65533};
    m3[0] = 5;
    int n_max = 0;

    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> m >> n;

        // lembrar de trocar '\n' por \n para otimzar
        if(m == 0){
            cout << n + 1 << '\n';
        } else if(m == 1){
            cout << n + 2 << '\n';
        } else if(m == 2){
            cout << 3 + n*2 << '\n';
        } else if(m == 3){
            if(n > n_max){
                int q = pow(2, n_max);
                int sum = m3[n_max];
                for(int i = n_max + 1; i <= n; i++){
                    sum = sum + 8 * q;
                    m3[i] = sum;
                    q *= 2;
                }
                n_max = n;
                cout << m3[n] << '\n';
            } else {
                cout << m3[n] << '\n';
            }

        } else if(m == 4){
            if(n == 0){
                cout << m4[0] << '\n';
            } else if(n == 1){
                cout << m4[1] << '\n';
            } else if(n == 2){
                // cout << m3[m4[1]] << '\n';
                n = m4[1];
                cout <<  m3[n_max] + 8 * pow(2, n_max) * (pow(2, n - n_max) - 1);
            }
        }
    }

    return 0;
}