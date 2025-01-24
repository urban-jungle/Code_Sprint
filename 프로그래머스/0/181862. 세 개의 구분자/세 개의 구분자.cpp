#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string tmp = "";
    for(int i = 0; i < myStr.size() + 1; i++){
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c' && i != myStr.size()){
            tmp += myStr[i];
        }
        else if(myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c'){
            if(tmp.size() != 0){
                answer.push_back(tmp);
            }
            tmp = "";
        }
        else if(i == myStr.size()){
            if(tmp.size() != 0){
                answer.push_back(tmp);
            }
            break;
        }
    }
    if(answer.size() == 0){
        answer.push_back("EMPTY");
    }
    return answer;
}