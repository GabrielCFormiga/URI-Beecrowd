/**
* @file 1284.cpp
* Aho-Corasick
*
* Created on 2024-08-20 at 20:33:25
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

struct No {
    int proxm[26];
    bool terminacao;
    int palavras;
    int filhos; 

    No(int palavras) {
        terminacao = false;
        this->palavras = palavras;
        fill(begin(proxm), end(proxm), -1);
        filhos = 0;
    }

    No() {
        terminacao = false;
        palavras = 0;
        fill(begin(proxm), end(proxm), -1);
        filhos = 0;
    } 
};

vector<No> trie;

void add_string(string const &s) {
    int v = 0;
    for (char ch : s) {
        int c = ch - 'a';
        if (trie[v].proxm[c] == -1) {
            trie[v].proxm[c] = trie.size();
            trie.push_back(No(trie[v].palavras));
            trie[v].filhos++;
        }
        trie[v].palavras++;
        v = trie[v].proxm[c];
    }
    trie[v].palavras++;
    trie[v].terminacao = true;
}

int cnt;
void busca(int teclas, int v) {
    if (trie[v].palavras == 1) {
        cnt += teclas;
        return;
    } else if (trie[v].terminacao) {
        cnt += teclas;
    }
    
    for (int i = 0; i < 26; i++) {
        if (trie[v].proxm[i] == -1) continue;

        if (trie[v].filhos != 1) busca(teclas + 1, trie[v].proxm[i]);
        else if (trie[v].terminacao) busca(teclas + 1, trie[v].proxm[i]);
        else busca(teclas, trie[v].proxm[i]);
    }
    
}

int main() { _
    int n;
    string s;
    while (cin >> n) {
        trie.clear();
        trie.emplace_back();

        for (int i = 0; i < n; i++) {
            cin >> s;
            add_string(s);
        }

        cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (trie[0].proxm[i] != -1) busca(1, trie[0].proxm[i]);
        }

        cout << fixed << setprecision(2) << (float) cnt / n << endl;
    } 
    
    return 0;
}