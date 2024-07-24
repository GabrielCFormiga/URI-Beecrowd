#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int prefix[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 1; i < 13; i++) {
        prefix[i] += prefix[i - 1];
    }
    
    int m, d;
    while (cin >> m >> d) {
        int dia = prefix[m - 1];
        dia += d;
        int dif = 360 - dia;
        
        if (dif < 0) {
            cout << "Ja passou!" << endl;
        } else if (dif == 0) {
            cout << "E natal!" << endl;
        } else if (dif == 1) {
            cout << "E vespera de natal!" << endl;
        } else {
            cout << "Faltam " << dif << " dias para o natal!" << endl;
        }
    }
 
    return 0;
} 