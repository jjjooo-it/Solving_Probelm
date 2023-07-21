//(2~7 : 2개) -> (8~19 : 3개) -> (20~37 : 4개) ..
//     6     ->     12       ->    18        ..

#include <iostream>
using namespace std;

int main(){
    int n, count=2,i=1;
    cin>>n;
    if(n==1) cout<< 1;
    else{
        while(n>=count){
            count += i*6;
            i++;
        }
        cout<< i;
    }
    return 0;
}