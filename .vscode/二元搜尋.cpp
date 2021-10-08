#include <bits/stdc++.h>
using namespace std;
int main(){
    int score[10];
    int mid=5, left=0, right=9;
    for(int i=0; i<9; i++)  cin>>score[i];
    sort(score+0, score+10);
    while (score[mid]!=59){
        cout<<"檢查score["<<mid<<"]="<<"是否等於59"<<endl;
        if(left>=right) break;
        if(score[mid]>59)   right=mid-1;
        else    left=mid-1;
        mid=(left+right)/2;
        cout<<"left更新為"<<left<<endl;
        cout<<"mid更新為"<<mid<<endl;
        cout<<"rihgt更新為"<<right<<endl;
    }
    if(score[mid]==59)  cout<<"找到59分"<<endl;
    else    cout<<"找不到59分"<<endl;
}