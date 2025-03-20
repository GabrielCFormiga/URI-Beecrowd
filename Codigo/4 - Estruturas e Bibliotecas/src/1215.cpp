/**
* @file 1215.cpp
*
* Created on 2025-03-19 at 17:04:24
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
    string line;
    set<string> words;
    string word;

    while (getline(cin, line)) {
        for (char &c : line) if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';

        int i = 0, j = 0;

        while (i < line.size()) {
            // procura o inicio de uma palavra
            while (i < line.size() && !(line[i] >= 'a' && line[i] <= 'z')) i++;

            if (i == line.size()) break;

            // procura o fim da palavra
            j = i;
            while (j + 1 < line.size() && line[j + 1] >= 'a' && line[j + 1] <= 'z') j++;

            // palavra em [i,j]
            word = line.substr(i, j - i + 1);
            if (words.find(word) == words.end()) words.insert(word); 

            i = j + 2;
        }
    }

    for (const string &word : words) {
        cout << word << endl;
    }


    return 0;
}