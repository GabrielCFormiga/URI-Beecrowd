/**
* @file 1252.cpp
*
* Created on 2025-03-19 at 14:32:05
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

#define MAX_N 10100

int n, m;
pair<int, int> ar[MAX_N]; // num, num % mod

int main() { _
    while (cin >> n >> m) {
        cout << n << ' ' << m << endl;
        if (n == 0) break;
        
        for (int i = 0; i < n; i++) {
            cin >> ar[i].first;
            ar[i].second = ar[i].first % m;
        }
        
        sort(ar, ar + n, [](pair<int, int> a, pair<int, int> b) {
            if (a.second < b.second) return true;
            else if (a.second > b.second) return false;
            else {
                if (a.first % 2 == 0) {
                    if (b.first % 2 == 0) {
                        // a e b par
                        return a.first < b.first;
                    } else {
                        // a par e b impar
                        return false;
                    }
                } else {
                    if (b.first % 2 == 0) {
                        // a impar e b par
                        return true;
                    } else {
                        // a e b impar
                        return a.first > b.first;
                    }
                }
            }
        });
        
        for (int i = 0; i < n; i++) cout << ar[i].first << endl;
    }    
    
    return 0;
}