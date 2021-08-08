#include<bits/stdc++.h>
using namespace std;

vector<long long> bag;

void ope1(long long a){
    bag.push_back(a);
}

void ope2(long long a){
    for(auto Bag : bag){
        Bag += a;
    }
}


int main(){
    long long q,x;
    vector<long long> X;
    vector<int> p;

    cin >> q;

    p.resize(q);

    for(int i=0;i<q;i++){
        cin >> p[i];
        if(p[i] == 1 || p[i]== 2){
            cin >> x;
            X.push_back(x);
        }
    }


}