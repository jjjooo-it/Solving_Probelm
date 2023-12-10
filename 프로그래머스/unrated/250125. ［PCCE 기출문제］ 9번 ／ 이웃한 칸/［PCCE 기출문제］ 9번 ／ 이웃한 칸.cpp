#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int dh[4] = {0,1,-1,0};
    int dw[4] = {1,0,0,-1};
    int len = board.size()-1;
    string myColor = board[h][w];
    
    for(int i=0;i<4;i++){
        int new_h = h + dh[i];
        int new_w = w + dw[i];
        
        if(0<=new_h&&new_h<=len&&0<=new_w&&new_h<=len){
            if(board[new_h][new_w] ==myColor) answer++;
        }
    }
    return answer;
}