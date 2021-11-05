#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d,ans1,ans2;
    d=b*b-4*a*c;
    cout<<d<<endl;
    if(d>0){
        ans1=(-1*b+sqrt(b*b-4*a*c))/(2*a);
        ans2=(-1*b-sqrt(b*b-4*a*c))/(2*a);
        cout<<"x1="<<ans1<<", x2="<<ans2<<endl;
    }
    if(d==0){
        ans1=(-1*b+sqrt(b*b-4*a*c))/(2*a);
        cout<<"x="<<ans1<<endl;
    }
    if(d<0){
        cout<<"non-real";
    }
}