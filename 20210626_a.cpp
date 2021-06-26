#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> N;
    N.resize(3);

    for(int i=0;i<3;i++) cin >> N[i];

    sort(N.begin(),N.end());

    cout << N[1] + N[2] << endl;
}