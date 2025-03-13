#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array){
    vector<int> answer;
    auto max_it = max_element(array.begin(), array.end());
    answer.push_back(*max_it);
    answer.push_back(distance(array.begin(), max_it));
    return answer;
}
