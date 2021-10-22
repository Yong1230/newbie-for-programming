#include <bits/stdc++.h>
using namespace std;
int sum(int x){
    int re;
    if(x==1){
        return 1;
    }
    else{
        re=sum(x-1)+x;
        return re;
    }
}
int main(){
    int n,result;
    cin>>n;
    result=sum(n);
    cout<<result;
}