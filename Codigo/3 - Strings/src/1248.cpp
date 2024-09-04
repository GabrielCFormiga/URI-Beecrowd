/**
* @file 1248.cpp
*
* Created on 2024-09-04 at 09:10:05
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int tt;
    cin >> tt;
    cin.ignore();

    string dieta, cafe, almoco; 
    while (tt--) {
        vector<int> cnt(26);
        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);

        for (int i = 0; i < dieta.size(); i++) {
            cnt[dieta[i] - 'A']++;
        }

        bool cheater = false;
        for (int i = 0; i < cafe.size(); i++) {
            if (--cnt[cafe[i] - 'A'] < 0) cheater = true;
            
        }
        
        for (int i = 0; i < almoco.size(); i++) {
            if (--cnt[almoco[i] - 'A'] < 0) cheater = true;
        }

        if (cheater) cout << "CHEATER" << endl;
        else {
            for (int i = 0; i < 26; i++) {
                char c = i + 'A';
                if (cnt[i] > 0) cout << c;
            }
            cout << endl;
        }

    } 
    
    return 0;
}