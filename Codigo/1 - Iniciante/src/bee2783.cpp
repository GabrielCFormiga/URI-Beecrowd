#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int n, c, m;
    cin >> n >> c >> m;
    vector<int> stamps(c);
    for(int i = 0; i < c; i++){
        cin >> stamps[i];
    }

    while(m--){
        int card;
        cin >> card;
        for(int i = 0; i < c; i++){
            if(card == stamps[i]) stamps[i] = 0;
        }
    }

    int count = 0;
    for(int i = 0; i < c; i++){
           if(stamps[i] != 0) count++;
    }

    cout << count << endl;

    return 0;
}