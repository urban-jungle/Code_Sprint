#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string tmp = "";
    for(int i = 0; i < my_str.size(); i++){
        if(((i+1) % n == 0) || (i == my_str.size() - 1)){
            tmp += my_str[i];
            answer.push_back(tmp);
            tmp = "";
        }
        else{
            tmp += my_str[i];
        }
    }
    return answer;
}