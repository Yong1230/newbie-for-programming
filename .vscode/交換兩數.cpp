#include <bits/stdc++.h>
using namespace std;
void swapbyvalue(int *,int *);
int main(){
    int a,b;
    cin>>a>>b;
    swapbyvalue(&a,&b);
    cout<<a<<" "<<b;
}
void swapbyvalue(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}