#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(), array.end());
    for(int i = 0; i < array.size(); i++){
        if(i == array.size()/2){
            answer = array[i];
        }
    }
    return answer;
}