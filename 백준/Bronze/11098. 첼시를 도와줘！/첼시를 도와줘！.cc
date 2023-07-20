#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,p;
    cin>>n;
    
    while(n--){
        cin>>p;
        vector<pair<int,string>> v;
        
        for(int i=0;i<p;i++){
            long long price;
            string name;
            cin>>price>>name;
            v.push_back({price,name});
        }
        sort(v.begin(),v.end());
        cout<< v[p-1].second<<' ';
    }
    return 0;
}
