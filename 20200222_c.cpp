#include<bits/stdc++.h>
using namespace std;

int n;
int x[110];



int main(){
    cin >> n;
    int max_num = 0;
    for(int i=0; i<n; ++i){
        cin >> x[i];
        if(x[i] > max_num) max_num = x[i];
    }

    int sum = 0;

    for(int i=0; i<=max_num; ++i){
        int tmp_sum = 0;
        for(int j=0; j<n; ++j){
            tmp_sum += pow(x[j]-i, 2.0);
        }
        if(i==0) sum = tmp_sum;
        if(tmp_sum < sum) sum = tmp_sum;
    }

    cout << sum << endl;
}
