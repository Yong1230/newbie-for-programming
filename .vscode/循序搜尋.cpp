#include <bits/stdc++.h>
using namespace std;
int main(){
    int score[5];
    int found=0;
    for(int i=0;i<5;i++){
        cin>>score[i];
        if(score[i]==59){
            cout<<"59分";
            found=1;
            break;
        }
    }
    if(found==0){
        cout<<"59級";
    }
}