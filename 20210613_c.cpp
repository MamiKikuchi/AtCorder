#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    cin >> a >> b >> c;

    char sign;

    if(c % 2 != 0){
        if(a<b) sign = '<';
        else if(a>b) sign = '>';
        else sign = '=';
    }else{
        int abs_a=abs(a);
        int abs_b=abs(b);

        if(abs_a<abs_b) sign = '<';
        else if(abs_a>abs_b) sign = '>';
        else sign = '=';
    }

    cout << sign << endl;


}