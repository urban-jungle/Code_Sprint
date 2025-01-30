#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for(auto &i : arr){
        if(k % 2 == 0){
            i += k;
        }
        else if(k % 2 == 1){
            i *= k;
        }
    }
    
    answer = arr;
    return answer;
}