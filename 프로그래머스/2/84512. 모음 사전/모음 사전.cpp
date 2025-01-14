#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string word) {
    int answer = 0;
    int weight[5] = {781, 156, 31, 6, 1};
    vector<char> dictionary = {'A', 'E', 'I', 'O', 'U'};
    for(int i = 0; i < word.size(); i++){
        int pos = find(dictionary.begin(), dictionary.end(), word[i]) - dictionary.begin();
        answer += pos * weight[i] + 1;
    }
    return answer;
}