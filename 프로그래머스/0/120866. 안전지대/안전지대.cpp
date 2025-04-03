#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board){
    int answer = 0;
    int N = board.size();
    int M = board[0].size();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(board[i][j] == 1){
                board[i][j] = 3;
                
                // 북, 남, 서, 동, 북서, 북동, 남서, 남동
                if(i - 1 >= 0 && board[i-1][j] == 0){
                    board[i-1][j] = 3;       // 북
                }
                if(i + 1 < N && board[i+1][j] == 0){
                    board[i+1][j] = 3;        // 남
                }
                if(j - 1 >= 0 && board[i][j-1] == 0){
                    board[i][j-1] = 3;       // 서
                }
                if(j + 1 < M && board[i][j+1] == 0){
                    board[i][j+1] = 3;        // 동
                }
                if(i - 1 >= 0 && j - 1 >= 0 && 
                board[i-1][j-1] == 0){
                    board[i-1][j-1] = 3; // 북서
                }
                if(i - 1 >= 0 && j + 1 < M && 
                board[i-1][j+1] == 0){
                    board[i-1][j+1] = 3;  // 북동
                }
                if(i + 1 < N && j - 1 >= 0 && 
                board[i+1][j-1] == 0){
                    board[i+1][j-1] = 3;  // 남서
                }
                if(i + 1 < N && j + 1 < M && 
                board[i+1][j+1] == 0){
                    board[i+1][j+1] = 3;   // 남동
                }
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(board[i][j] == 0) answer++;
        }
    }

    return answer;
}
