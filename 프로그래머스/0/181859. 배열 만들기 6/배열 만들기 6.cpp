#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for(int i = 0; i < arr.size();){
        if(stk.empty()){
            stk.push_back(arr[i]);
            i += 1;
        }
        else{
            if(stk[stk.size() - 1] == arr[i]){
                stk.pop_back();
                i += 1;
            }
            else if(stk[stk.size() - 1] != arr[i]){
                stk.push_back(arr[i]);
                i += 1;
            }
        }
    }
    if(stk.size() == 0){
        stk.push_back(-1);
    }
        return stk;
}