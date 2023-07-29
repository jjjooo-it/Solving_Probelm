#include <iostream>
using namespace std;

int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    int count1=0,count2=0;
    for(int i=0;i<8;i++){
        if(arr[i]==i+1)count1++;
        else if(arr[i]==8-i) count2++;
        else continue;
    }
    if(count1==8) cout<< "ascending";
    else if(count2==8) cout << "descending";
    else cout<<"mixed";
    return 0;
}