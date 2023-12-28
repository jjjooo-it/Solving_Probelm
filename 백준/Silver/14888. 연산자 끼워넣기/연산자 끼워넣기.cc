//부등호 문제에서 연산자로만 바꾸면 될 듯
//모든 경우의 수를 생각하고 정렬 후 최댓값, 최솟값
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int *num= new int[n]; //숫자
int oper[4]; //연산자
vector<int>result; //모든 가능한 값을 저장할 변수


//여기서 index는 트리의 깊이
void dfs(int index, int myNum){
    if(index == n){
        result.push_back(myNum);
        return;
    }
    
    for(int i=0;i<4;i++){
        if(oper[i]>0){
            oper[i]--;
            if(i==0) dfs(index+1,myNum+num[index]);
            else if(i==1) dfs(index+1,myNum-num[index]);
            else if(i==2) dfs(index+1,myNum*num[index]);
            else if(i==3) dfs(index+1,myNum/num[index]);
            oper[i]++;
        }
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<4;i++){
        cin>>oper[i];
    }
    dfs(1,num[0]);
    sort(result.begin(),result.end());
    cout<< result[result.size()-1] << endl << result[0];
}
