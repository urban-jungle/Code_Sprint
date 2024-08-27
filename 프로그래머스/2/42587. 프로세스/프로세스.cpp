#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int i=0;
    while(!priorities.empty()){
        auto max1 = max_element(priorities.begin(), priorities.end());
        if (priorities[i] == *max1) {
            answer++;
            if (i == location) {
                return answer; 
            }
            priorities.erase(priorities.begin() + i);
            if (i < location) {
                location--;
            }
        } else {
            i++;
        }
        if (i >= priorities.size()) {
            i = 0;
        }
    }
    return answer;
}