#include <bits/stdc++.h>
using namespace std;
int isPrime(int x){
    int j=2, flag=1;
    while(flag==1 and j<x){
        if(x%j==0){
            flag=0;
            break;
        }
        j+=1;
    }
    return flag;
}
int main(){
    int result;
    for(int i=2; i<101; i++){
        result=isPrime(i);
        if(result==1)    cout<<i<<"為質數"<<endl;
    }
}