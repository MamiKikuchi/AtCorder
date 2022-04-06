#include<bits/stdc++.h>
using namespace std;

int n, v_a, v_b, l;

int main(){
    cin >> n >> v_a >> v_b >> l;
    
    double l2 = double(l) * pow(double(v_b)/double(v_a), double(n));
    cout  << fixed << setprecision(12) << l2 << endl;
}