#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long n,k, flag=0;
    cin>>n>>k;
    int arr[100001];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        k-=arr[i];
        if(k<0){
            flag=1;
            cout<< i+1;
            break;
        }
    }
    
    
    if(!flag){
        for(int i=n-1;i>=0;i--){
            k-=arr[i];
            if(k<0){
                cout<< i+1;
                break;
            }
        }
    }
    
    return 0;
}
