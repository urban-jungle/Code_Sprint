#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if(arr1.size() == arr2.size()){
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < arr1.size(); i++){
            sum1 += arr1[i];
        }
        for(int j = 0; j < arr2.size(); j++){
            sum2 += arr2[j];
        }
        if(sum1 == sum2){
            answer = 0;
        }
        else if(sum1 < sum2){
            answer = -1;
        }
        else if(sum1 > sum2){
            answer = 1;
        }
    }
    else{
        if(arr1.size() > arr2.size()){
            answer = 1;
        }
        else if(arr2.size() > arr1.size()){
            answer = -1;
        }
    }
    return answer;
}