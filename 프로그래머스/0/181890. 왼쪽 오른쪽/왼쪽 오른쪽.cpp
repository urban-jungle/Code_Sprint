#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int left = 0;
    int right = 0;
    int idx = 0; 
    for(int i = 0; i < str_list.size(); i++){
        if(str_list[i] == "l"){
            left += 1;
            idx = i;
            break;
        }
        else if(str_list[i] == "r"){
            right += 1;
            idx = i;
            break;
        }
    }
    if(left == 1){
        for(int i = 0; i < idx; i++){
            answer.push_back(str_list[i]);
        }
    }
    else if(right == 1){
        for(int i = idx + 1; i < str_list.size(); i++){
            answer.push_back(str_list[i]);
        }
    }
    return answer;
}