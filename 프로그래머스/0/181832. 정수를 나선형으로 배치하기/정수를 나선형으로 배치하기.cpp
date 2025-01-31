#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> arr(n, vector<int>(n, 0)); 
    
    int num = 1;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;

    while (left <= right && top <= bottom){
        for (int i = left; i <= right; i++){
            arr[top][i] = num++;
        }
        top++;
        
        for (int i = top; i <= bottom; i++){
            arr[i][right] = num++;
        }
        right--;
        
        if (top <= bottom){
            for (int i = right; i >= left; i--){
                arr[bottom][i] = num++;
            }
            bottom--;
        }
        
        if (left <= right){
            for (int i = bottom; i >= top; i--){
                arr[i][left] = num++;
            }
            left++;
        }
    }
    return arr;
}