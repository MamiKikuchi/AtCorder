#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A;
    A.resize(N);

    for(int i=0;i<N;i++) cin >> A[i];

    sort(A.begin(),A.end());

    cout << abs(A[N-1]-A[0]) << endl;

}