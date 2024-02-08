#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;


double solve(double p, double q, int Ri, int N){
    if(p == q) return (double)Ri / N;
    
    return (1 - (double)pow(q / p, Ri)) / (1 - (double)pow(q / p, N));
}

int main(){ _
    int ev1, ev2, at, d;
    while(1){
        cin >> ev1 >> ev2 >> at >> d;
        
        if(ev1 == 0 && ev2 == 0 && at == 0 && d == 0) break;
        
        double p = (double)at / 6;
        int N, Ri, aux, count;
        
        count = 0;
        aux = ev1;
        while(aux > 0){
            aux -= d;
            count++;
        }
        Ri = count;

        count = 0;
        aux = ev2;
        while(aux > 0){
            aux -= d;
            count++;
        }
        N = Ri + count;

        p = solve(p, 1 - p, Ri, N) * 100;

        cout << fixed << setprecision(1) << p << endl;
    }

    return 0;
}