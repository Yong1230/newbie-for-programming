#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10],big=0;
    srand(time(NULL));
    cout<<"before"<<endl;
    for(int i=0;i<10;i++){
        arr[i]=rand()%100+1;
        cout<<arr[i]<<endl;
    }
    cout<<"after"<<endl;
    for(int i=9;i>0;i--){
        big=0;
        for(int j=0;j<=i;j++){
            if(arr[big]<arr[j]){
                big=j;
            }
        }
        swap(arr[big],arr[i]);
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}