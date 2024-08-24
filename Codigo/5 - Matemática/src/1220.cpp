/**
* @file 1220.cpp
* "The Trip" UVA 10137
* Trabalhe com inteiros para evitar imprecisão
*
* Created on 2024-08-24 at 16:50:13
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
        vector<float> f_students(n);
        vector<int> d_students(n);
        int sum = 0; // soma inteira
        int avg; // média inteira
        int r; // guarda os centavos em excesso
        int ans = 0;

        for (int i = 0; i < n; i++) {
            cin >> f_students[i];
            d_students[i] = round(f_students[i] * 100); // round evita imprecisão do float 
            sum += d_students[i];
        }

        if (sum % n == 0) {
            avg = sum / n;

            for (int i = 0; i < n; i++) {
                if (d_students[i] < avg) ans += avg - d_students[i];
            }

        } else {
            // caso em que há excesso de centavos
            avg = sum / n;
            r = sum % n;

            // teremos r alunos com avg + 1
            for (int i = 0; i < n; i++) {
                if (d_students[i] >= avg + 1 && r > 0) {
                    r--;
                    ans += d_students[i] - (avg + 1);
                } else if (d_students[i] > avg) {
                    ans += d_students[i] - avg;
                }
            }
            
        }    
            cout << '$' << fixed << setprecision(2) << ans / 100 <<  '.' << setw(2) << setfill('0') << ans % 100 << endl;
    } 
    
    return 0;
}