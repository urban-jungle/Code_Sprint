#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    if(num_list.size() >= 11){
        for(int i = 0; i < num_list.size(); i++){
            answer += num_list[i];
        }
    }
    else if(num_list.size() <= 10){
        for(int i = 0; i < num_list.size(); i++){
            if(answer == 0){
                answer = 1;
            }
            answer *= num_list[i];
        }
    }
    return answer;
}