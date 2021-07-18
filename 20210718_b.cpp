#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> A,B,C;
    A.resize(n);
    B.resize(n);
    C.resize(n);
    for(int i=0;i<n;i++) cin >> A[i];
    for(int i=0;i<n;i++) cin >> B[i];
    for(int i=0;i<n;i++) cin >> C[i];

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());

    int count =0;
    int change = 0;
    int change2 = 0;

    for(int i=0;i<n;i++){
        if(A[i]< B[i]){
            if(B[i] >= C[i] && i < (n-change)){
                change++;
                swap(C[i],C[n-change]);
                if(B[i] < C[i]) count++;
                else{
                    swap(C[i],C[n-change]);
                    change--;
                }
            }else  if(B[i] < C[i]) count++;
        }else{
            change2++;
            swap(B[i],B[n-change2]);
            if(A[i]< B[i]){
                if(B[i] >= C[i] && i < (n-change)){
                    change++;
                    swap(C[i],C[n-change]);
                    if(B[i] < C[i]) count++;
                    else{
                        swap(C[i],C[n-change]);
                        change--;
                    }
                }else  if(B[i] < C[i]) count++;
            }else{
                swap(B[i],B[n-change2]);
                change2--;
            }
        }
    }

    cout << count << endl;
}