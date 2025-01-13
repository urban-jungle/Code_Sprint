#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i <= r; i++){
        string num = to_string(i);
        bool is_valid = true;
        for(int j = 0; j < num.size(); j++){
            if(num[j] != '5' && num[j] != '0'){
                is_valid = false;
                break;
            }
        }
        if(is_valid){
            answer.push_back(i);
        }
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}