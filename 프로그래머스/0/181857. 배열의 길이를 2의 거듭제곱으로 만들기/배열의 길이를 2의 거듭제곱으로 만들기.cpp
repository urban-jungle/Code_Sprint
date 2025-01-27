#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> arr) {
    int size = arr.size();

    int next = 1;
    while (next < size){
        next *= 2;
    }
    
    while (arr.size() < next){
        arr.push_back(0);
    }
    
    return arr;
}