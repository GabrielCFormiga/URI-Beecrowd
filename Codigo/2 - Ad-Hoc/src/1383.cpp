/**
* @file 1383.cpp
*
* Created on 2024-09-13 at 00:23:09
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
    int ar[9][9];
    int tt;

    cin >> tt;
    for (int t = 1; t <= tt; t++) {
        cout << "Instancia " << t << endl;

        bool sudoku = true;
        vector<vector<bool>> linhas(9, vector<bool> (9));
        vector<vector<bool>> colunas(9, vector<bool> (9));
        vector<vector<bool>> regioes(9, vector<bool> (9));

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> ar[i][j];
                ar[i][j]--;
                linhas[i][ar[i][j]] = true;
                colunas[j][ar[i][j]] = true;
            }
        }

        int reg = 0; // indica o index da regiao
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                
                for (int x = i; x < i + 3; x++) {
                    for (int y = j; y < j + 3; y++) {
                        regioes[reg][ar[x][y]] = true;
                    }
                }

                reg++;
            }
            
        }

        for (int i = 0; i < 9; i ++) {
            for (int j = 0; j < 9; j++) {
                if (!linhas[i][j] || !colunas[i][j] || !regioes[i][j]) {
                    sudoku = false;
                    break;
                }
            }
            if (!sudoku) break;
        }

        if (sudoku) cout << "SIM";
        else cout << "NAO";

        cout << endl << endl;
    } 
    
    return 0;
}