#include <iostream>
using namespace std;

int main(){
    int arr[10],dat[1001]={0},sum=0,max=-99,result;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        sum+=arr[i];
        dat[arr[i]]++;
    }
    cout<< sum/10<<'\n';
    for(int i=0;i<1001;i++){
        if(dat[i]!=0){
            if(dat[i]>max){
                max=dat[i];
                result= i;
            }
        }
    }
    cout<< result;
    return 0;
}
