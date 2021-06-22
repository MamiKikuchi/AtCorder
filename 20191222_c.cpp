#include<bits/stdc++.h>
using namespace std;


//最大公約数
long long Gcd(long long a, long long b){
    if(a % b == 0) return b;
    else return Gcd(b, a%b);
}
//最小公倍数
long long Lcm(long long a, long long b){
    return a*b / Gcd(a, b);
}

int main(){
    long long  A, B;

    cin >> A >> B;

    long long lcm2 = Lcm(A, B);

    cout << lcm2 << endl;

}