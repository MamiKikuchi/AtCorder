#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<int> A;
    cin >> N;
    A.resize(N);

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    sort(A.begin(),A.end());
    bool exit = false;

    for(int i=0;i<N-1;i++){
        if(A[i]==A[i+1]){
            exit =true;
            break;
        }
    }

    if(exit) cout << "NO" << endl;
    else cout << "YES" << endl; 
}