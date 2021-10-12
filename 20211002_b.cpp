#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    string ans = "No";

    if(s==t) ans= "Yes";
    else{

        for(int i=0;i<(int)s.size()-1;i++){
            char tmp = s.at(i);
            s.at(i)=s.at(i+1);
            s.at(i+1)=tmp;

            if(s == t){
                    ans = "Yes";
                
            }

            tmp = s.at(i);
            s.at(i)=s.at(i+1);
            s.at(i+1)=tmp;

        }
    }
    cout << ans << endl;
}