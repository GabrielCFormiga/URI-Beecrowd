#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(){ _
    int tt;
    cin >> tt;
    while(tt--){
        string user, comp;
        cin >> user >> comp;
        if(comp == user){
            cout << "empate" << endl;
        }

        if ((user == "tesoura") && (comp == "papel")) {
			cout << "rajesh" << endl;
		}
		if ((user == "papel") && (comp == "pedra")) {
			cout << "rajesh" << endl;
		}
		if ((user == "pedra") && (comp == "lagarto")) {
			cout << "rajesh" << endl;
		}
		if ((user == "lagarto") && (comp == "spock")) {
			cout << "rajesh" << endl;
		}
		if ((user == "spock") && (comp == "tesoura")) {
			cout << "rajesh" << endl;
		}
		if ((user == "tesoura") && (comp == "lagarto")) {
			cout << "rajesh" << endl;
		}
		if ((user == "lagarto") && (comp == "papel")) {
			cout << "rajesh" << endl;
		}
		if ((user == "papel") && (comp == "spock")) {
			cout << "rajesh" << endl;
		}
		if ((user == "spock") && (comp == "pedra")) {
			cout << "rajesh" << endl;
		}
		if ((user == "pedra") && (comp == "tesoura")) {
			cout << "rajesh" << endl;
		}

		// losing senarios
		if ((comp == "tesoura") && (user == "papel")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "papel") && (user == "pedra")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "pedra") && (user == "lagarto")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "lagarto") && (user == "spock")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "spock") && (user == "tesoura")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "tesoura") && (user == "lagarto")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "lagarto") && (user == "papel")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "papel") && (user == "spock")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "spock") && (user == "pedra")) {
			cout << "sheldon" << endl;
		}
		if ((comp == "pedra") && (user == "tesoura")) {
			cout << "sheldon" << endl;
		}
    }

    return 0;
}