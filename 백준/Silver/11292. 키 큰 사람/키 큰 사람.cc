#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string,float> a, pair<string,float> b){
    return a.second > b.second;
}


int main(){
    vector<pair<string,float>> v;
    
    while(1){
        int t;
        cin>>t;
        if(t==0) break;
        string name;
        float height;
        for(int i=0;i<t;i++){
            cin>>name>>height;
            v.push_back({name,height});
        } 
        sort(v.begin(),v.end(),cmp);
        
        for(int i=0;i<t;i++){
            if(v[i].second==v[0].second){
                cout<< v[i].first<<' ';
            }
        }
        cout<< '\n';
        v.clear();
    }
    return 0;
}