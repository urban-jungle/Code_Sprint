#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> three = {3,3,1,1,2,2,4,4,5,5};
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0; i < answers.size(); i++){
        one.push_back(one[i]);
        two.push_back(two[i]);
        three.push_back(three[i]);
        
        if(one[i] == answers[i]) {
            cnt1 += 1;
        }
        if(two[i] == answers[i]) {
            cnt2 += 1;
        }
        if(three[i] == answers[i]) {
            cnt3 += 1;
        }
    }
    
    int max_score = max({cnt1, cnt2, cnt3});
    if(cnt1 == max_score) answer.push_back(1);
    if(cnt2 == max_score) answer.push_back(2);
    if(cnt3 == max_score) answer.push_back(3);

    sort(answer.begin(), answer.end());
    return answer;
}