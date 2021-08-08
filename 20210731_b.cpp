#include<bits/stdc++.h>
using namespace std;

int main(){
    string X;
    cin >> X;


    int count = 0;
    int count2 =0;
    string ans = "Strong";
    for(int i=0;i<3;i++){
        if(X.at(i)== X.at(i+1)) count++;
        
            if(int(X.at(i+1)-'0')==int(X.at(i)-'0')+1 || int(X.at(i+1)-'0')== 9- int(X.at(i)-'0')) count2++;
            //cout << int(X.at(i)-'0')+1 << int(X.at(i+1)-'0') << endl;
        
        //cout << count << endl;
    }
    if(count == 3 || count2 == 3) ans = "Weak";

    cout << ans << endl;
}