#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k,n;
    cin>>k>>n;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    sort(arr,arr+k);
    
    //랜선의 길이는 (1~arr의 최댓값) 사이
    long long start=1,end=arr[k-1],mid,sum,max=-999;
    while(start<=end){
        sum=0;
        mid=(start+end)/2;
        
        for(int i=0;i<k;i++){
            if(arr[i]/mid>0)sum+=(arr[i]/mid);
        }
        if(sum>=n){
            start=mid+1;
            if(mid>max)max=mid;
        }
        else {
            end=mid-1;
        }
    }
    cout<< max;
    return 0;
}