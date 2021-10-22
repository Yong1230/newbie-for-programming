#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y){
    int re;
    if(x==0)    re=y;
    else    re=gcd(y%x, x);
    return re;
}
int main() {
    int n, m, result;
    cin>>n>>m;
    result=gcd(n,m);
    cout<<result<<"為"<<n<<"和"<<m<<"的最大公因數";
}