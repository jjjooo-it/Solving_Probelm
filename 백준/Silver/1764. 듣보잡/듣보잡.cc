#include <iostream>
#include <cstring>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    set<string> never_heard;
    set<string> never_seen;

    for(int i=0;i<n;i++){
        string heard;
        cin>>heard;
        never_heard.insert(heard);
    }
    for(int i=0;i<m;i++){
        string seen;
        cin>> seen;
        never_seen.insert(seen);
    }

    vector <string> result;
 
    for (const auto& seen : never_seen) {
        if (never_heard.count(seen) > 0) {
            result.push_back(seen);
        }
    }

    sort(result.begin(),result.end());
    cout<< result.size()<<endl;

    for(int i=0;i<result.size();i++){
        cout<< result[i]<<endl;
    }

    return 0 ;
}