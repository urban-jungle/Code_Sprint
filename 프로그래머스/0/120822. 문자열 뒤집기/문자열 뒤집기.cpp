#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int i = my_string.size() - 1;
    while(i >= 0){
        answer += my_string[i];
        i--;
    }
    return answer;
}