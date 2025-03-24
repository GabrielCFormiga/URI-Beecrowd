/**
* @file 1084.cpp
*
* Created on 2025-03-20 at 03:37:11
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
    int n, d;
    string str;
    
    while (cin >> n >> d && n != 0) {
        cin >> str;
        
        deque<pair<int, int>> q; // {mx, index}
        
        int to_select = n - d;
        int cnt_added = 0, cnt_removed = 0;
        
        while (to_select) {
            while (cnt_added <= n - to_select) {
                // add
                while (!q.empty() && q.back().first < str[cnt_added] - '0') q.pop_back();
                q.push_back({str[cnt_added] - '0', cnt_added});
                cnt_added++;
            }
            
            cout << q.front().first;
            to_select--;
            
            // remove
            q.pop_front();
        }
        
        cout << endl;
    }
    
    return 0;
}