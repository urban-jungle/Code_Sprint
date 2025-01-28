#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    for(int i = 1; i < 31; i++){
        int tmp = 0;
        for(int j = 0; j < strArr.size(); j++){
            if(strArr[j].size() == i){
                tmp += 1;
            }
        }
        answer = max(answer, tmp);
    }
    return answer;
}