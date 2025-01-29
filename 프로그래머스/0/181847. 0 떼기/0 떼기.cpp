#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int i = 0;
    while(n_str[i] == '0'){
        i++;
    }
    for(int j = i; j < n_str.size(); j++){
        answer += n_str[j];
    }
    return answer;
}