#include <bits/stdc++.h>
using namespace std;
int f(int x){
    int answer;
    if(x==1){
        answer=1;
    }
    else{
        answer=x*f(x-1);
    }
    return answer;
}
int main(){
    int n,result;
    cin>>n;
    result=f(n);
    cout<<result<<endl;
}