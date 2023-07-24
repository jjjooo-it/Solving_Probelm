#include <iostream>
#include <algorithm>
using namespace std;

//국어->내림차순, 영어->오름차순, 수학->내림차순, 이름->오름차순
struct stu{
    string name;
    int kor,eng,math;
};
bool cmp(stu a, stu b){
    if(a.kor == b.kor) {
        if(a.eng == b.eng) {
            if(a.math == b.math) {
                return a.name < b.name;
            }
            else return a.math > b.math;
        }
        else return a.eng < b.eng;
    }
    else return a.kor > b.kor;
}

int main(){
    int n;
    cin>>n;
    vector<stu> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i].name>>v[i].kor>>v[i].eng>>v[i].math;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<< v[i].name <<'\n';
    }
    return 0;
}
