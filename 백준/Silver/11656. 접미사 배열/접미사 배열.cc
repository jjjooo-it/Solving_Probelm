#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string> v;
    
    for(int i=0;i<s.size();i++){
        string a = s.substr(i, s.size());
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<'\n';
    }
    return 0;
}