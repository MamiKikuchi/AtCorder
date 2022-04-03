#include<bits/stdc++.h>
using namespace std;

double a, b;

int main(){
    cin >> a >> b;
    double max_len = sqrt(pow(a, 2) + pow(b, 2));

    double ans_x = a * (1.0 / max_len);
    double ans_y = b * (1.0 / max_len);  

    cout << fixed << setprecision(12) << ans_x << " " << ans_y;
}