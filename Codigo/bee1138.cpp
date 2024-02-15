// NOT SOLVED YET
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int count(int n, int i){
    int result = 0, pot = 1;
    while(n > 0){
        int dig = n % 10;
        n / 10;
        



        pot *= 10;
    }
}

int main(){
    int a, b;
    while(cin >> a >> b && a != 0){
        for(int i = 0; i < 10; i++){
            cout << count(b, i) - count(a - 1, i);
            i == 9 ? cout << endl : cout << ' ';
        }
    }
}