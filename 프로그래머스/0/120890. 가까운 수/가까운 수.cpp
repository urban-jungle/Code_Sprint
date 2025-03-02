#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    vector<int> dif;
    sort(array.begin(), array.end());
    
    for(int i = 0; i < array.size(); i++){
        dif.push_back(abs(n - array[i]));
    }
    
    int idx = min_element(dif.begin(), dif.end()) - dif.begin();
    answer = array[idx];
    
    return answer;
}