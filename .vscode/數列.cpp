#include <bits/stdc++.h>
using namespace std;
int main(){
    int F[10000];
    F[0]=1;
    F[1]=1;
    for(int i=2;i<16;i++){
        F[i]=F[i-1]+F[i-2];
        cout<<F[i]<<endl;
    }
}