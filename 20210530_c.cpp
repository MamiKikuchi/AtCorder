#include <bits/stdc++.h>
using namespace std;


int main(void){
    int N;
    long long K,a,b;
    cin >> N >> K;
    vector<pair<long long,long long>> Fri;
    
    for(int i=0;i<N;i++){
        cin >> a >>b;
        Fri.push_back({a,b});
    }
    
   // long long money = K;
    //long long temp = 0,goal=0;
    
    sort(Fri.begin(),Fri.end());
 
    for(int i=0;i<N;i++){
        /*
        money -= (Fri[i].first-temp);
        //cout << money <<endl;
        
        if(money >= 0){
            money +=  Fri[i].second;
            temp = Fri[i].first;
            goal = Fri[i].first + money;

        }else{
            
            break;
        }
        */
        if(Fri[i].first > K) break;

        K += Fri[i].second;
        
    }
    
    cout << K <<endl;
    return 0;
    
}
