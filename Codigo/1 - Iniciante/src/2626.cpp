/**
* @file 2626.cpp
*
* Created on 2025-03-10 at 21:39:54
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
    string dodo, leo, pepper;

    map<string, string> win_case;
    win_case["pedra"] = "tesoura";
    win_case["tesoura"] = "papel";
    win_case["papel"] = "pedra"; 

    string m_dodo = "Os atributos dos monstros vao ser inteligencia, sabedoria...";
    string m_leo = "Iron Maiden's gonna get you, no matter how far!";
    string m_pepper = "Urano perdeu algo muito precioso...";
    string m_empate = "Putz vei, o Leo ta demorando muito pra jogar...";

    int wins_dodo = 0, wins_leo = 0, wins_pepper = 0;

    while (cin >> dodo >> leo >> pepper) {
        if (win_case[dodo] == leo) wins_dodo++;
        if (win_case[dodo] == pepper) wins_dodo++;

        if (win_case[pepper] == leo) wins_pepper++;
        if (win_case[pepper] == dodo) wins_pepper++;

        if (win_case[leo] == dodo) wins_leo++;
        if (win_case[leo] == pepper) wins_leo++;
    }

    if (wins_dodo == 2) cout << m_dodo << endl;
    else if (wins_pepper == 2) cout << m_pepper << endl;
    else if (wins_leo == 2) cout << m_leo << endl;
    else cout << m_empate << endl;
    
    return 0;
}