#include<bits/stdc++.h>
using namespace std;

int L, H, N, lefttime=-1;

int main(){
    cin >> L >> H >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        if(A[i] < L) lefttime = L - A[i];
        else if(A[i] > H) lefttime = -1;
        else lefttime = 0;
        cout << lefttime << endl;
    }
}