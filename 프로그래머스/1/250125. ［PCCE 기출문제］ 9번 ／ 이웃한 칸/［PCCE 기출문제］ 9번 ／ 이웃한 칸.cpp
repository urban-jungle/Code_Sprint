#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int n = board.size();
    int count = 0;
    vector<int> dh = {0, 1, -1, 0};
    vector<int> dw = {1, 0, 0, -1};
    int h_check, w_check;
    for(int i = 0; i< 4; i++){
        h_check = h + dh[i];
        w_check = w + dw[i];
        if((h_check >= 0) && (h_check < n)){
            if(board[h][w] == board[h_check][w_check]){
                count += 1;
            }
        }
    }
    return count;
}