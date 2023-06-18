#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int sosu(int n){//소수 판별
    if(n<2)return 0;
    int a = (int)sqrt(n);
    for(int i=2;i<=a;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int pall(int n){//팰린드롬 판별
    string s = to_string(n);
    long len = s.length();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]) return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    while(1){
        if(pall(n)&&sosu(n)){
            cout<< n;
            break;
        }
        n++;
    }
    return 0;
}