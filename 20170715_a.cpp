#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    bool check = false;

    if( A%3==0 || B%3==0 || (A+B)%3==0) check = true;

    if(check) cout << "Possible" << endl;
    else cout << "Impossible" << endl;


}