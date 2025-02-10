#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int i = num_list.size() - 1;
    while(i >= 0){
        answer.push_back(num_list[i]);
        i--;
    }
    return answer;
}