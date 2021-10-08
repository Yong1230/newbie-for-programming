#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5],big=0,min;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        if(arr[i]>big){
            big=arr[i];
        }
    }
    min=big;
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min<<endl;
}