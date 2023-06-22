#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int cmp(string a, string b){
    if(a.length()==b.length()){
        return a<b;
    }
    else{
        return a.length()<b.length();
    }
}

int main(){
    int n;
    cin>>n;
    vector<string>v;
    
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    
    
    cout<<v[0]<<'\n';
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1])continue; //겹치는 부분 삭제
        cout<< v[i]<<'\n';
    }

    return 0;
}