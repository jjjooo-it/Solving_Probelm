#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<char>input;
vector<string>result;
int flag[10] = {0};
int k;

void brute_force(int index, string num){ //재귀를 돌려 모든 경우의 수 확인
    if(index == k+1){ //조합 생성 완성
        result.push_back(num);
        return;
    }
    
    for(int i=0;i<10;i++){
        if(flag[i]==1)continue;
        
        
        if(index==0||(input[index-1]=='<' && num[index-1]< i+'0')){
            flag[i]=1;
            brute_force(index+1, num+to_string(i));
            flag[i]=0;
        }
        
        if(index==0||(input[index-1]=='>' && num[index-1] > i+'0')){
            flag[i]=1;
            brute_force(index+1, num+to_string(i));
            flag[i]=0;
        }
    }
    
}

int main(){
    cin>>k;
    for(int i=0;i<k;i++){
        char ch;
        cin>>ch;
        input.push_back(ch);
    }
    brute_force(0, "");
    sort(result.begin(), result.end()); //모든 경우의 수가 담겨있는 result를 정렬
    
    cout<< result[result.size()-1] << endl << result[0];
    
    return 0;
}