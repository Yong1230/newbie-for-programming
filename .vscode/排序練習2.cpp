#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5],big=0,number;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(big<arr[i]){
            big=arr[i];
            number=i;
        }
    }
    cout<<"在第"<<number+1<<"項時,最大值為"<<big<<endl;
}