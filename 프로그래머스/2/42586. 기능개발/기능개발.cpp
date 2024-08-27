#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> r;
    int cnt = 1;
    for(int i = 0; i < progresses.size(); i++) {
        r.push_back(ceil((100.0 - progresses[i]) / speeds[i]));
    }

    for(int i = 0; i < r.size(); i++) {
        for(int j = i + 1; j < r.size(); j++) {
            if(r[i] >= r[j]){ // 같은 날에 완료되는 경우도 포함
                cnt++;
            } 
            else{
                break;
            }
        }
        answer.push_back(cnt);
        i += cnt - 1;
        cnt = 1;
    }

    return answer;
}
