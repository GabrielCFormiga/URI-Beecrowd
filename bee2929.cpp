#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

stack<pair<int,int>> s1; 

void add(int value){
    int min_value;
    if(s1.empty()){
        min_value = value;
    } else {
        min_value = min(value, s1.top().second);
    }
    s1.push({value, min_value});
}

int main(){ _
    int qtdOp, value;
    string op;
    cin >> qtdOp;

    while(qtdOp--){
        cin >> op;
        if(op == "PUSH"){
            cin >> value;
            add(value);
        } else if(op == "POP"){
            if(s1.empty()) cout << "EMPTY\n";
            else s1.pop();
        } else {
            if(s1.empty()) cout << "EMPTY\n";
            else cout << s1.top().second << endl;
        }
    }

    return 0;
}