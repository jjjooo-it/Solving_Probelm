#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = health;
    int count = 0;
    int len = attacks.size()-1;
    int i=0;
    
    for(int time=1; time<=attacks[len][0]; time++){
       if(time==attacks[i][0]){
         answer -= attacks[i++][1]; //공격 받을 시
         count=0;
         if(answer <=0) return -1;
        }
    
        else{
          count++;
          answer = min(answer+bandage[1], health);
          if(count==bandage[0]){
            answer = min(answer+bandage[2], health);//연속 붕대 성공 시
            count=0;
           }
        }   
    }

    return answer;
}