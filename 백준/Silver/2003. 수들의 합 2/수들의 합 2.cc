#include <iostream>
using namespace std;

int main(){
    int n,m,count=0,sum=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int q=i;q<n;q++){
            sum +=arr[q];
            if(sum==m){
                if(sum==0)break;
                count++;
            }
        }
        if(sum!=0) sum=0;
    }
    cout<< count;
    return 0;
}