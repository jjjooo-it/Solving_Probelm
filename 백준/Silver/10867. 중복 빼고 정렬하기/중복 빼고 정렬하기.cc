#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    //중복된 값을 vector의 제일 뒷부분에 보내고(unique) 삭제함(erase)
    //unique : 앞과 뒤 원소를 비교해서 중복된 값을 뒤로 보냄
    v.erase(unique(v.begin(),v.end()), v.end());
    
    for(auto result : v){
        cout<< result<<' ';
    }
    
    return 0;
}