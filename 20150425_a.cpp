#include<bits/stdc++.h>
using namespace std;

int n, s, t, w;
int A[10010];

int main(){
    cin >> n >> s >> t >> w;
    
    int weight, count;
    //1日目の体重
    weight = w;
    //ベストボディーだった日の数
    if(weight >= s && weight <= t) count = 1;
    else count = 0;

    for(int i=1; i<n; i++){
        cin >> A[i];
        weight += A[i];
        if(weight >= s && weight <= t) count++;
    }

    cout << count << endl;
}