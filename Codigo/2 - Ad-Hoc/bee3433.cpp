#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size() 

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
const int inf  = 1e9 + 10;

int main(){ _
    vector<int> deck(14, 4);
    deck[0] = 0;
    int n;
    cin >> n;
    
    int maria = 0, joao = 0;
    
    // read joao
    int x;
    
    cin >> x;
    if(x <= 10) joao += x;
    else joao += 10;
    deck[x]--;
    
    cin >> x;
    if(x <= 10) joao += x;
    else joao += 10;
    deck[x]--;

    // read maria
    cin >> x;
    if(x <= 10) maria += x;
    else maria += 10;
    deck[x]--;
    
    cin >> x;
    if(x <= 10) maria += x;
    else maria += 10;
    deck[x]--;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x <= 10) {
            joao += x;
            maria += x;
        } else {
            joao += 10;
            maria += 10;
        }
        deck[x]--;
    }
    
    
    if(maria >= joao) {
        if(maria > 13) {
            if(deck[23 - maria] > 0) {
                cout << 23 - maria << endl;
            } else {
                cout << -1 << endl;
            }
        } else if(maria == 13) {
            for(int i = 10; i <= 14; i++) {
                if(i == 14) cout << -1 << endl;
                else if(deck[i] > 0) {
                    cout << i << endl;
                    break;
                }
            }
        } else {
            cout << -1 << endl;
        }
    } else {
        // maria < joao
        if(joao <= 13) cout << -1 << endl;
        else {
            int mn = 24 - joao;
            int mx = 23 - maria;

            if(mx >= 10) {
                for(int i = mn; i <= 14; i++) {
                    if(i == 14) {
                        cout << -1 << endl;
                    } else if(deck[i] != 0) {
                        cout << i << endl;
                        break;
                    }
                }
            } else {
                for(int i = mn; i <= mx + 1; i++) {
                    if(i == mx + 1) {
                        cout << - 1 << endl;
                    } else if(deck[i] != 0) {
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
    }
        

    
    return 0;
}
