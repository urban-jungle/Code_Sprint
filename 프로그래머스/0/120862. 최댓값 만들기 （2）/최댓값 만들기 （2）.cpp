#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    int minimum = numbers[0] * numbers[1];
    int maximum = numbers[numbers.size() - 2] * numbers[numbers.size() - 1];
    answer = max(minimum, maximum);
    return answer;
}