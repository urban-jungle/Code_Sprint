#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    int rows = num_list.size() / n;
    vector<vector<int>> answer(rows, vector<int>(n));
    int cnt = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < n; j++){
            answer[i][j] = num_list[cnt++];
        }
    }
    return answer;
}
