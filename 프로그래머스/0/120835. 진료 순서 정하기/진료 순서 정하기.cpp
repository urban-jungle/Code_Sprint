#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int i, int j){
    return j < i;
}

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size(), 0);
    vector<int> tmp = emergency;
    sort(tmp.begin(), tmp.end(), compare);
    for(int i = 0; i < tmp.size(); i++){
        for(int j = 0; j < emergency.size(); j++){
            if(tmp[i] == emergency[j]){
                answer[j] = i+1;
            }
        }
    }
    return answer;
}