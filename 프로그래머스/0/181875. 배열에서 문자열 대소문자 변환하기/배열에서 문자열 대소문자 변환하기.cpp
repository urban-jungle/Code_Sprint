#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i = 0; i < strArr.size(); i++){
        string tmp = strArr[i];
        for(int j = 0; j < strArr[i].size(); j++){
            if(i == 0 || i % 2 == 0){
                tmp[j] = tolower(tmp[j]);
            }
            else if(i % 2 == 1){
                tmp[j] = toupper(tmp[j]);
            }
        }
        strArr[i] = tmp;
    }
    answer = strArr;
    return answer;
}