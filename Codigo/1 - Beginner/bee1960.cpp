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
    int n;
    cin >> n;
    
    vector<string> notation = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    vector<int> numbers = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    
    int i = numbers.size() - 1;
    string ans = "";
    
    while(n > 0 && i >= 0) {
        if (n / numbers[i] > 0) {
            int tmp = n / numbers[i];
            while(tmp--) ans += notation[i];
            n %= numbers[i];
        }
        i--;
    }
    
    cout << ans << endl;
    
    
    
    
    return 0;
}
