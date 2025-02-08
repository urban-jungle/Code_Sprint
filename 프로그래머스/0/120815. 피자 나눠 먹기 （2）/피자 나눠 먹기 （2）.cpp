#include <string>
#include <vector>
#include <numeric>
using namespace std;

int solution(int n) {
    int answer = 0;
    int lcm_value = (n * 6) / gcd(n, 6);
    answer = lcm_value / 6;
    return answer;
}