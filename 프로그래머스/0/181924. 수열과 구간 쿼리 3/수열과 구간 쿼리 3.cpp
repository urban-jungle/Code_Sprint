#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++){
        answer.push_back(arr[i]);
    }
    for(int i = 0; i < queries.size(); i++){
        answer[queries[i][0]] = arr[queries[i][1]];
        answer[queries[i][1]] = arr[queries[i][0]];
        arr = answer;
    }
    return answer;
}