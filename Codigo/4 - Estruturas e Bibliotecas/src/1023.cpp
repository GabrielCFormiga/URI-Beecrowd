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
    int n, teste = 1;
    
    while(cin >> n && n != 0) {
        if(teste > 1) cout << endl;
        cout << "Cidade# " << teste << ':' << endl;
        
        vector<pair<int, int>> vec(n); // consumo, pessoas
        int consumoTotal = 0, pessoasTotais = 0;
        
        
        for(int i = 0; i < n; i++) {
            cin >> vec[i].second >> vec[i].first;
            consumoTotal += vec[i].first;
            pessoasTotais += vec[i].second;
            vec[i].first = vec[i].first / vec[i].second;
        }
        
        sort(all(vec));
        
        vector<pair<int, int>> ans; // consumo, pessoas
        
        for(int i = 0; i < n; i++) {
            if(i == 0 || vec[i].first > ans[ans.size() - 1].first) {
                ans.pb(make_pair(vec[i].first, vec[i].second));
            } else {
                ans[ans.size() - 1].second += vec[i].second;
            }
        }

        
        
        // exibe ans
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i].second << '-' << ans[i].first;
            i == ans.size() - 1 ? cout << endl : cout << ' ';
        }
        
        double consumoMedio = (double) consumoTotal / pessoasTotais;
        
        int consumoMedio_int = consumoMedio * 100;
        cout << "Consumo medio: " << consumoMedio_int / 100 << ".";
        if(consumoMedio_int % 100 < 10) cout << 0;
        cout << consumoMedio_int % 100 << " m3." << endl;
        
        teste++;
    }
    
    return 0;
}
