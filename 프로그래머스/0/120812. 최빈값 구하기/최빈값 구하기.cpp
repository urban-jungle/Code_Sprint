#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> freq;
    int max_freq = 0;
    int answer = -1;

    for (int num : array) {
        freq[num]++;
        max_freq = max(max_freq, freq[num]);
    }

    int count = 0;
    for (auto& pair : freq) {
        if (pair.second == max_freq) {
            if (count == 0) {
                answer = pair.first;
            } else {
                return -1;
            }
            count++;
        }
    }

    return answer;
}