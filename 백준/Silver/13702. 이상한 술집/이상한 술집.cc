#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    long long start=1,end=arr[n-1],mid,sum,max=-999;
    while(start<=end){
        sum=0;
        mid=(start+end)/2;
        
        for(int i=0;i<n;i++){
            if(arr[i]/mid>0)sum+=(arr[i]/mid);
        }
        
        if(sum>=k){
            start=mid+1;
            if(mid>max) max = mid;
        }
        else {
            end = mid-1;
        }
    }
    cout<< max;
    return 0;
}