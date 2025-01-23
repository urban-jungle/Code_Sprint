#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt = 0;
    for(int i = 0; i < myString.size() + 1; i++){
        cnt++;
        if(myString[i] == 'x' || i == myString.size()){
            cnt -= 1;
            answer.push_back(cnt);
            cnt = 0;
        }
    }
    return answer;
}