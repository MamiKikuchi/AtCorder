#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    int rank = 0;

    if(x >=0 && x < 40){
        rank = 40 - x;
    }else if(x>=40 && x < 70){
        rank = 70 -x;
    }else if(x>=70 && x < 90){
        rank = 90-x;
    }
    if(rank == 0) cout << "expert" << endl;
    else cout << rank << endl;
}