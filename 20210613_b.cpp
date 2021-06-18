#include<bits/stdc++.h>
using namespace std;

int main(){

    int N, a;
    cin >> N;

    vector<int> A;

    for(int i=0; i < N; i++){
        cin >> a;
        A.push_back(a);
    }

    sort(A.begin(),A.end());

    int count = 0;
    for(int i=0; i<N; i++){
        if((i+1) == A[i]) count++;
    }
 
    if(count == N) cout << "Yes" << endl;
    else cout << "No" << endl;

}