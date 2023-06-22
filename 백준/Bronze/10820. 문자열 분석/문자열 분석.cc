#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        int small=0,big=0,num=0,gap=0;
        for(int i=0;i<s.size();i++){
            if('A'<=s[i]&&s[i]<='Z')big++;
            else if('a'<=s[i]&&s[i]<='z')small++;
            else if('0'<=s[i]&&s[i]<='9')num++;
            else if(s[i]==' ')gap++;
        }
        cout<<small<<' '<<big<<' '<<num<<' '<<gap<<'\n';
    }
    return 0;
}
