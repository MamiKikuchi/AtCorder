#include<bits/stdc++.h>
using namespace std;



int main(){
    int x, y;
    string str,s;
    vector<string> V;

    getline(cin ,str);
    stringstream ss{str};

    while(getline(ss,s, '.')){
        V.push_back(s);
    }

    y = stoi(V[1]);
    
    if(y >= 0 && y <= 2) V[0] += "-";
    else if(y >= 7 && y <= 9) V[0] += "+";

    cout << V[0] << endl;
}