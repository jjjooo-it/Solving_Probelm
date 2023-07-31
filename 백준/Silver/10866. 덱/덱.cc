#include <iostream>
#include <deque>
#include <cstring>
using namespace std;

int main(void){
    deque<int> dq;
    int n;
    cin>>n;
    while(n--){
        string com;
        cin>>com;
        if(com=="push_front"){
            int x;
            cin>>x;
            dq.push_front(x);
        }
        else if(com=="push_back"){
            int x;
            cin>>x;
            dq.push_back(x);
        }
        else if(com=="pop_front"){
            if(!dq.empty()){
                cout<< dq.front()<<'\n';
                dq.pop_front();
            }
            else cout<< -1 <<'\n';
        }
        else if(com=="pop_back"){
            if(!dq.empty()){
                cout<< dq.back()<<'\n';
                dq.pop_back();
            }
            else cout<< -1 <<'\n';
        }
        else if(com=="size"){
            cout<<dq.size()<<'\n';
        }
        else if(com=="empty"){
            cout<<dq.empty()<<'\n';
        }
        else if(com=="front"){
            if(!dq.empty()){
                cout<< dq.front()<<'\n';
            }
            else cout<< -1 <<'\n';
        }
        else if(com=="back"){
            if(!dq.empty()){
                cout<< dq.back()<<'\n';
            }
            else cout<< -1 <<'\n';
        }
    }
    return 0;
}