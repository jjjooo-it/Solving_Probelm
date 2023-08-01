#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v; //학생 번호 & 점수 합계

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second < b.second) return a.second > b.second;
    else if(a.second==b.second) return a.first < b.first;
    else return a.second > b.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int score[n];
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    for(int i=0;i<m;i++){
        int num,sum=0;
        cin>>num;
        for(int q=0;q<n;q++){
            char a;
            cin>>a;
            if(a=='O') sum+=score[q];
            else continue;
        }
        v.push_back({num,sum});
    }
    sort(v.begin(),v.end(),cmp);
    cout<< v[0].first <<' '<< v[0].second;
    return 0;
}