#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = -1;
    int idx = 0;
    for(int i : num_list){
        if(i < 0){
            answer = idx;
            break;
        }
    idx += 1;
    }
    return answer;
}