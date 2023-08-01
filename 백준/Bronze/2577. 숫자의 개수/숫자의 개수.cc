#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,c,dat[10]={0};
    cin>>a>>b>>c;
    int mul = a*b*c;
    string s = to_string(mul);
    
    for(char a : s){
        dat[a-48]++;
    }
    for(int i=0;i<10;i++){
        cout<< dat[i]<<'\n';
    }
    return 0;
}