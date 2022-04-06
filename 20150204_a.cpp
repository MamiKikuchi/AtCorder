#include<bits/stdc++.h>
using namespace std;

int a, b, c;

int main(){
    cin >> a >> b >> c;

    int rank[3];
    rank[0] = 1; rank[1] = 1; rank[2] = 1;

    if(a<b && a< c) rank[0] += 2;
    else if(a<b || a < c) rank[0] ++;
    if(b<a && b< c) rank[1] += 2;
    else if(b<a || b < c) rank[1] ++;
    if(c<a && c< b) rank[2] += 2;
    else if(c<a || c < b) rank[2] ++;

    for(int i=0; i<3; i++) cout << rank[i] << endl;
}