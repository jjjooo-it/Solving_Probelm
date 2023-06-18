#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
void output(int one,int two){
    for(int i=0;i<9;i++){
        if(i==one||i==two)continue;
        else cout<< arr[i]<<endl;
    }
}
int main(){
    int sum=0;
    for(int i=0;i<9;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+9);
    
    //flag가 필요한 이유)https://www.acmicpc.net/board/view/105109
    bool flag=0;
    for(int i=0;i<8&&!flag;i++){
        for(int q=i+1;q<9&&!flag;q++){
            if(sum-(arr[i]+arr[q])==100){
                output(i,q);
                flag=1;
            }
        }
    }
    return 0;
}