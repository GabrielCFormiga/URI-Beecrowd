/**
* @file 1140.cpp
*
* Created on 2024-09-09 at 18:02:02
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
    string s;
    char c;
    bool tautograma;

    while (getline(cin, s)) {
        if (s[0] == '*') break;

        c = s[0];
        if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
        tautograma = true;

        for (int i = 1; i < s.size(); i++) {
            char aux = s[i];
            if (aux >= 'A' && aux <= 'Z') aux = aux - 'A' + 'a'; 

            if (s[i - 1] == ' ' && aux != c) {
                tautograma = false;
                break;
            } 
        }

        cout << (tautograma ? 'Y' : 'N') << endl;
    }
    
    return 0;
}