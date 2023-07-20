#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string a;
    cin>>a;
    sort(a.begin(),a.end(),greater<>());
    cout<<a;
    return 0;
}