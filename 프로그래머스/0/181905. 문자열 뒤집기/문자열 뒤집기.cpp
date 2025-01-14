#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    for(int i = 0; i < (e - s + 1)/2; i++){
        char tmp;
        tmp = my_string[s + i];
        my_string[s + i] = my_string[e - i];
        my_string[e - i] = tmp;
    }
    answer += my_string;
    return answer;
}