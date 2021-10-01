#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10],temp;
    srand(time(NULL));
    cout<<"before"<<endl;
    for(int i=0;i<10;i++){
        arr[i]=rand()%100+1;
        cout<<arr[i]<<endl;
    }
    for(int i=9;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"after"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}