/**
* @file 2344.cpp
*
* Created on 2024-08-18 at 23:45:00
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
    cin >> n;

    if (n >= 86) cout << "A";
    else if (n >= 61) cout << "B";
    else if (n >= 36) cout << "C";
    else if (n >= 1) cout << "D";
    else cout << "E";

    cout << endl;
    
    return 0;
};