#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for(int i = 0; i < strlist.size(); i++){
        int cnt = 0;
        for(int j = 0; j < strlist[i].size(); j++){
            if(strlist[i] != """ && strlist[i] != """){
                cnt += 1;
            }
        }
        answer.push_back(cnt);
    }
    return answer;
}