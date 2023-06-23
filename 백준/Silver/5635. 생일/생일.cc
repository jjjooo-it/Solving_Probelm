#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    
    //sort를 사용하기 위해 거꾸로
    vector<pair<pair<int,int>, pair<int,string>>> v;
    
    
    string name;
    int day,month,year;
    for(int i=0;i<n;i++){
        cin>>name>>day>>month>>year;
        v.push_back({{year,month},{day,name}});
    }
    sort(v.begin(), v.end());
    
    cout<< v[n-1].second.second<<'\n'<<v[0].second.second<<'\n';
    return 0;
}
