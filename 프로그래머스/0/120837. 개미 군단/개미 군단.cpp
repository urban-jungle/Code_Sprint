#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int top = 5;
    int mid = 3;
    int low = 1;
    answer += hp / top;
    hp = hp % top;
    answer += hp / mid;
    hp = hp % mid;
    answer += hp / low;
    return answer;
}