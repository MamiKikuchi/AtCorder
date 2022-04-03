#include<bits/stdc++.h>
using namespace std;

float a, b;

int main(){
    cin >> a >> b;
    int tap_num = 1 + ceil((b-a)/(a-1));

    cout << tap_num << endl;
}
