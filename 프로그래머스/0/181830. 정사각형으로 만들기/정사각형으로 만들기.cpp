#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int row = arr.size();
    int column = arr[0].size();
    
    if(row > column){
        for(int i = 0; i < row; i++){
            while(arr[i].size() < row){
                arr[i].push_back(0);
            }
        }
    }
    else if(row < column){
        while(arr.size() < column){
            arr.push_back(vector<int>(column, 0));
        }
    }
    return arr;
}