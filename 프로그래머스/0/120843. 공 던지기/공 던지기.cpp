#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int cnt = 0;
    int i = 0;
    while(cnt < k){
        answer = numbers[i];
        i += 2;
        if(i > numbers.size() - 1){
            i = i - numbers.size();
        }
        cnt++;
    }
    return answer;
}