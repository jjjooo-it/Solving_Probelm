#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int *arr, int target, int start, int end){
    if(start>end) return false;

    int mid= (start+end)/2;
    if(arr[mid]==target){
        return true;
    }
    else if(arr[mid]>target){
        return binary_search(arr,target,start,mid-1);
    }
    else{return binary_search(arr,target,mid+1,end);}
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int m;
    cin>>m;
    int target[m];
    for(int i=0;i<m;i++){
        cin>>target[i];
    }
    
    sort(arr,arr+n);
    for(int i=0;i<m;i++){
        if(binary_search(arr,target[i],0,n-1)==false){
            cout<< 0 <<' ';
        }
        else cout<<1<<' ';
    }
    
    return 0;
}