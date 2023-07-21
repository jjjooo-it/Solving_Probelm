#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        int n;
        cin >> n;
        int arr[n];
        for(int q=0;q<n;q++){
            cin>>arr[q];
        }
        sort(arr,arr+n,greater<>());
        int gap = 0;
        
        for(int p=0;p<n-1;p++){
            if(gap<arr[p]-arr[p+1]){
                gap=arr[p]-arr[p+1];
            }
        }
        cout << "Class " << i+1<<'\n';
        cout << "Max " << arr[0] << ", Min " << arr[n-1] << ", Largest gap " << gap <<'\n';
        
    }
}
