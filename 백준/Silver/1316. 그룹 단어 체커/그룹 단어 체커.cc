#include <iostream>
using namespace std;

int main(){
    int num,count=0;
    cin>>num;
    
    for(int i=0;i<num;i++){
        string str;
        cin>>str;
        int size = str.length();
        bool flag = true;
        
        //붙어있는 단어가 다르고 + 그 단어가 원래 존재한다 == 그룹단어가 아니다
        for(int q=0;q<size;q++){
            for(int j=0;j<q;j++){
                if(str[q]!=str[q-1]&&str[q]==str[j]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag) count++;
    }
    cout<< count;
 
    return 0;
}
