#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A;
    A.resize(3);

    for(int i=0;i<3;i++) cin >> A[i];

    sort(A.begin(),A.end());

    int cost = 0;

    for(int i=1;i<3;i++){
        cost += A[i] - A[i-1];
    }

    cout << cost << endl;

}