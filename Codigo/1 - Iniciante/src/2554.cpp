/**
* @file 2554.cpp
*
* Created on 2025-03-10 at 21:01:56
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
    int n, d, cnt, aux;
    string data;

    while (cin >> n >> d) {
        string ans = "";

        while (d--) {
            cin >> data;

            cnt = 0;

            for (int i = 0; i < n; i++) {
                cin >> aux;
                cnt += aux;
            }

            if (cnt == n && ans == "") ans = data;
        }

        cout <<  (ans != "" ?  ans : "Pizza antes de FdI") << endl;
    }
    
    return 0;
}