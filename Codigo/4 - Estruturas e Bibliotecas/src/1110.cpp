/**
* @file 1110.cpp
*
* Created on 2024-08-22 at 03:01:31
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
    int n;
    while (cin >> n && n != 0) {
        queue<int> q;
        vector<int> dis;
        for (int i = 1; i <= n; i++) q.push(i);

        while (q.size() >= 2) {
            dis.pb(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }

        cout << "Discarded cards: ";
        for (int i = 0; i < dis.size(); i++) {
            cout << dis[i];
            cout << (i == dis.size() - 1 ? "\n" : ", ");
        }
        cout << "Remaining card: " << q.front() << endl;
    } 
    
    return 0;
}