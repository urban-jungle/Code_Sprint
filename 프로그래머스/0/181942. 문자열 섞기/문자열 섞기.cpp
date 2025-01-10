#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    for(int i = 0; i < str1.size(); i++){
        answer += string(1, str1[i]) + string(1, str2[i]);
    }
    return answer;
}