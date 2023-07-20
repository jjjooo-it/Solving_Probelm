#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int,int>>v;
    for(int i=0;i<8;i++){
        int a;
        cin>>a;
        v.push_back({a,i});
    }
    sort(v.rbegin(),v.rend());//내림차순(점수)
    int result = 0;
    for(int i=0;i<5;i++){
        result+=v[i].first;
    }
    cout<< result<<'\n';
    
    int index[5]={0};
    for(int i=0;i<5;i++){
        index[i]=(v[i].second)+1;
    }
    sort(index,index+5);//오름차순(인덱스)
    for(int i=0;i<5;i++){
        cout<< index[i]<<' ';
    }
    return 0;
}
