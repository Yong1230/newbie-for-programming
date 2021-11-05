#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5],big,number;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr+0,arr+5);
    cout<<arr[0];