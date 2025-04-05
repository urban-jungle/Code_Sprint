#include <string>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 0;

    while (count < n){
        answer += 1;
        if (answer % 3 == 0 || to_string(answer).find('3') != string::npos){
            continue;
        }
        count++;
    }

    return answer;
}