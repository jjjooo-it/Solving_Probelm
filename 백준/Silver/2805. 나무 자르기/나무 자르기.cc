#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    //이분탐색을 사용하는 이유가 무엇일까?
    //어쩌피 h는 나무의 길이의 최대보다 작아야 하기 때문
    //즉, h는 0(start)~arr의 최댓값(end) 사이의 값
    long long start=0,end=arr[n-1],mid,sum,max=-999;
    while(start<=end){
        sum=0;
        mid = (start+end)/2;
        
        for(int i=0;i<n;i++){
            if(arr[i]-mid>0) sum+=(arr[i]-mid);
        }
        
        if(sum>=m){
            start= mid+1;
            if(mid>max) max=mid;
        }
        else end = mid -1;
    }
    
    cout<<max;
    return 0;
}
