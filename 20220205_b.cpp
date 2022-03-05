#include<bits/stdc++.h>
using namespace std;
/*
int sum_rad(vector<int> rads, int N){
    int sum = 0;
    for(int i=0; i<N; i++){
        sum += rads[i];
    } 
    return sum;
}

int main(){
    int N;
    cin >> N;
    vector<int> A;
    A.resize(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    } 

    vector<int> rads(N,0);
    rads[0] = A[0];
    rads[1] = 360 - A[0];
    for(int i=1;i<N;i++){
        int sum = sum_rad(rads, i);
        if(sum <= 360){
        
        }
    } 
}
*/  
int main(){
    int n;
    cin >> n;
    //0ドから何度の場所に切れ込みがあるかどうかの判定
    vector<bool> fl(360, false);
    fl[0] = true;
    //切れ込みのある角度
    int p=0;
    for(int i=0;i<n;i++){
        int a;
        //包丁を何度まわすか
        cin >> a;
        p+=a;
        //360度より大きい時は余りの部分を考慮
        p%=360;
        //切れ込みがある部分をtrueにする
        fl[p] = true;
    }
    int res=0, cur=0;
    for(int i=0;i<=360;i++){
        //切れ込みがある場合は残りの角度と切れ込みがある角度で大きい方を選択
        if(fl[i%360]){
            res = max(res, cur);
            cur = 0;
        }
        cur++;
    }
    cout << res << endl;
}