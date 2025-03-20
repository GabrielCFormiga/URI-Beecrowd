/**
* @file 2312.cpp
*
* Created on 2025-03-20 at 03:06:34
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

    vector<tuple<string, int, int, int>> vec(n);

    string name;
    int a, b, c;
    for (int i = 0; i < n; i++) {
        cin >> name >> a >> b >> c;
        vec[i] = make_tuple(name, a, b, c);
    }

    sort(all(vec), [](tuple<string, int, int, int> a, tuple<string, int, int, int> b){
        return get<0>(a) < get<0>(b);
    });

    sort(all(vec), [](tuple<string, int, int, int> a, tuple<string, int, int, int> b){
        return get<3>(a) > get<3>(b);
    });

    sort(all(vec), [](tuple<string, int, int, int> a, tuple<string, int, int, int> b){
        return get<2>(a) > get<2>(b);
    });

    sort(all(vec), [](tuple<string, int, int, int> a, tuple<string, int, int, int> b){
        return get<1>(a) > get<1>(b);
    });
    
    for (auto &x : vec) {
        cout << get<0>(x) << ' ' << get<1>(x) << ' ' << get<2>(x) << ' ' << get<3>(x) << endl;
    }
    
    return 0;
}