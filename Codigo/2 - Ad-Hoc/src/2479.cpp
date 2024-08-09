#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> nomes(n);
    int count = 0;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        if(c == '+') count++;
        
        cin >> nomes[i];
    }
    
    sort(nomes.begin(), nomes.end());
    
    for(int i = 0; i < n; i++){
        cout << nomes[i] << endl;
    }
    cout << "Se comportaram: " << count << " | Nao se comportaram: " << n - count << endl;
    
    
    return 0;
}