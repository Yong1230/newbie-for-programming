#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    int count=0;
    int ans[4];
    ans[count]=rand()%10;
    count+=1;
    while(count<4){
        ans[count]=rand()%10;
        count+=1;
        for(int i=0; i<count+1; i++){
            if(ans[i]==ans[count-1]){
                count-=1;
                break;
            }
        }
    }
    for()

}