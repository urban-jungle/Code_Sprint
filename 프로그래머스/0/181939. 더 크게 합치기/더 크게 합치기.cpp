#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string sa = to_string(a);
    string sb = to_string(b);
    answer = max(stoi(sa+sb), stoi(sb+sa));
    return answer;
}