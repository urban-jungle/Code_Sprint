#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min_idx;
    int max_idx;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2){
            min_idx = i;
            break;
        }
    }
    for(int j = arr.size() - 1; j >= 0; j--){
        if(arr[j] == 2){
            max_idx = j;
            break;
        }
    }
    for(int k = min_idx; k <= max_idx; k++){
        answer.push_back(arr[k]);
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}