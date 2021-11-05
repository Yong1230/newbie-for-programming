#include <bits/stdc++.h>
using namespace std;
int main(){
    int prize[6];
    int count=0;
    srand(time(NULL));
    prize[count]=rand()%49+1;
    count+=1;
    while(count<6){
       prize[count]=rand()%49+1;
       count+=1;
       for(int i=0;i<count+1;i++){
           if(prize[i]==prize[i-1]){
               count-=1;
               break;
           }
       } 
    }
    sort(prize+0,prize+6);
    for(int i=0;i<6;i++){
        cout<<prize[i]<<" ";
    }
}