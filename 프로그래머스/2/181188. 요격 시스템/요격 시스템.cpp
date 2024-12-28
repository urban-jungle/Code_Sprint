#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> &v1, vector<int> &v2){
    if(v1[1] == v2[1]){
        return v1[0] < v2[0];
    }
    else{
        return v1[1] < v2[1];
    }
}

int solution(vector<vector<int>> targets) {
    int answer = 0;
    sort(targets.begin(), targets.end(), compare);
    int end = targets[0][1];
    answer += 1;
    
    for(int i = 0; i < targets.size(); i++){
        if(targets[i][0] < end){
            continue;
        }
        else{
            answer += 1;
            end = targets[i][1];
        }
    }
    return answer;
}