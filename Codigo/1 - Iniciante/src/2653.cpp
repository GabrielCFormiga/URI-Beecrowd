/**
* @file 2653.cpp
*
* Created on 2025-03-16 at 15:34:24
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

/* 
    Solucao 3: 
    int main() {
        string str;
        unordered_set<string> unique_strings;

        while (cin >> str) {
            unique_strings.insert(str);
        }

        cout << unique_strings.size() << endl;

        return 0;
    }
 */

/* 
    Solucao 2: O(N*logN)

int main() {
    vector<string> vec;
    string str;

    while (cin >> str) {
        auto it = lower_bound(vec.begin(), vec.end(), str);
        if (it == vec.end() || *it != str) {
            vec.insert(it, str);
        }
    }

    cout << vec.size() << endl;
} */

// Solucao 1: O(N*|S|) => 0.026s
struct Node {
    Node *left;
    Node *right;
    bool str_end;

    Node() {
        str_end = false;
        left = nullptr;
        right = nullptr;
    }
};

int main() { _
    string str;
    int qtd = 0;

    Node root;

    while (cin >> str) {
        Node *curr = &root;
        
        bool add = false;
        
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(') {
                // left
                if (curr->left == nullptr) curr->left = new Node;
                curr = curr->left;    
            } else {
                // right
                if (curr->right == nullptr) curr->right = new Node;
                curr = curr->right;
            }

            if (i == str.size() - 1 && !curr->str_end) {
                add = true;
                curr->str_end = true;
            } 
        }

        if (add) qtd++;
    }

    cout << qtd << endl;
    
    return 0;
}