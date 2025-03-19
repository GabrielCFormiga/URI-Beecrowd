/**
* @file 1448.cpp
*
* Created on 2025-03-18 at 13:44:37
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
    for (int t = 1; t <= tt; t++) {
        cout << "Instancia " << t << endl;
        
        string ans, t1, t2;
        
        getline(cin, ans);
        getline(cin, t1);
        getline(cin, t2);
        
        int cnt1 = 0, cnt2 = 0;
        int desempate = 0;
        
        for (int i = 0; i < ans.size(); i++) {
            if (desempate == 0 && t1[i] != t2[i]) {
                if (t1[i] == ans[i]) desempate = 1; 
                if (t2[i] == ans[i]) desempate = 2;
            }
            
            if (ans[i] == t1[i]) cnt1++;
            if (ans[i] == t2[i]) cnt2++;
        }
        
        if (cnt1 > cnt2) desempate = 1;
        else if (cnt2 > cnt1) desempate = 2;
        
        if (desempate == 0) cout << "empate" << endl << endl;
        else cout << "time " << desempate << endl << endl;
    }
    
    return 0;
}