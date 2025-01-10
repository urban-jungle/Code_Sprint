#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mul = num_list[0];
    int sum = num_list[0];
    for(int i = 1; i < num_list.size(); i++){
        mul *= num_list[i];
        sum += num_list[i];
    }
    if(mul < (sum*sum)){
        answer = 1;
    }
    else{
        answer = 0;
    }
    return answer;
}