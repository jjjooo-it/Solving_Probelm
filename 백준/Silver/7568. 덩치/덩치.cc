#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,x,y,count=1;
    cin>>t;
    vector<pair<int,int>>v;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(int i=0;i<t;i++){
        for(int q=0;q<t;q++){
            if(v[i].first<v[q].first&&v[i].second<v[q].second){
                count++;
            }
        }
        cout<< count<<' ';
        count=1;
    }
    return 0;
}