#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int F[16];
    F[0]=1;
    F[1]=2;

    for(int i=2; i<16; i++){
        F[i]=F[i-1]+F[i-2];
    }

    int index;
    cin>>index;
    if(index>16 or index<0)    cout<<"error";
    else    cout<<F[index];
}