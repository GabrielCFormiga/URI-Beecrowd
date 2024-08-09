#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef long long llu;
const int inf  = 1e9 + 10;

int main(){ _ 
    int tt;
    cin >> tt;
    
    while(tt--) {
        int N1, D1, N2, D2;
        char aux, op;
        
        cin >> N1 >> aux >> D1 >> op >> N2 >> aux >> D2;
        
        int ansN, ansD;
        
        switch (op) {
            case '+': 
                ansN = (N1*D2 + N2*D1);
                ansD = (D1*D2);
                break;
            case '-':
                ansN = (N1*D2 - N2*D1);
                ansD = (D1*D2);
                break;
            case '*':
                ansN = (N1*N2);
                ansD = (D1*D2);
                break;
            case '/':
                ansN = (N1*D2);
                ansD = (N2*D1);
                break;
        }
        
        cout << ansN << '/' << ansD << " = ";
        
        int mn = min(abs(ansN), abs(ansD));
        
        for(int i = 2; i <= mn; i++) {
            while(ansN % i == 0 && ansD % i == 0) {
                ansN /= i;
                ansD /= i;
            }
        }
        
        cout << ansN << '/' << ansD << endl; 
    }
    
    return 0;
}
