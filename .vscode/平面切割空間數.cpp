#include <bits/stdc++.h>
using namespace std;
int space(int x){
    int re;
    if(x==1){
        return 2;
    }
    else{
        re=space(x-1)+((pow(x,2)-x+2))/2;
        return re;
    }
}
int main(){
    int n,result;
    cin>>n;
    result=space(n);
    cout<<result;
}