#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    if(arr.size() % 2 == 1){
        for(int i = 0; i < arr.size(); i += 2){
            arr[i] += n;
        }
    }
    else{
        for(int j = 1; j < arr.size(); j += 2){
            arr[j] += n;
        }
    }
    answer = arr;
    return answer;
}