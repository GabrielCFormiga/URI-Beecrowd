/**
* @file 1088.cpp
* Inversion Count usando BIT
*
* Created on 2024-08-22 at 15:31:27
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

struct BIT {
	vector<ll> elements;
	int size;

	BIT(int _size) {
		elements = vector<ll>(_size);
		size = _size;
	}

	void update(int index, ll delta) {
		for(int i = index; i < size; i += i&-i) {
			elements[i] += delta;
		}
	}

	ll query(int index) {
		ll sum = 0;
		for(int i = index; i > 0; i -= i&-i) {
			sum += elements[i];
		}

		return sum;
	}
};

int main() { _
    int n;
    while (cin >> n && n != 0) {
        ll sum = 0;
        int mx = 0;
        BIT bit(4 * n + 2);

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            mx = max(mx, num);
            bit.update(num, 1);

            sum += bit.query(mx) - bit.query(num);
        }

        if (sum % 2 == 0) cout << "Carlos" << endl;
        else cout << "Marcelo" << endl;
    } 
    
    return 0;
}