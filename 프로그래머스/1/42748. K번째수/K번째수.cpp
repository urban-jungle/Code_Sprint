#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++) {
        int start = commands[i][0] - 1;
        int end = commands[i][1];
        int k = commands[i][2] - 1;

        vector<int> array2(array.begin() + start, array.begin() + end);
        
        sort(array2.begin(), array2.end());
        
        answer.push_back(array2[k]);
    }
    return answer;
}