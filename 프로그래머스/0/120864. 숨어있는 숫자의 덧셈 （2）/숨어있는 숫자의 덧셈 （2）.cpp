#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string str = "";
    vector<string> s;
    for(int i = 0; i < my_string.size(); i++){
        if(my_string[i] <= '9' && my_string[i] >= '0'){
            str += my_string[i];
            if(i == my_string.size() - 1){
                s.push_back(str);
                break;
            }
        }
        else{
            if(str != ""){
                s.push_back(str);
                str = "";
            }
        }
    }
    for(int j = 0; j < s.size(); j++){
        answer += stoi(s[j]);
    }
    return answer;
}