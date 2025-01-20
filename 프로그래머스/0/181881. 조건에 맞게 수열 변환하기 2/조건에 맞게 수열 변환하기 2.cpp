#include <vector>
using namespace std;

int solution(vector<int> arr) {
    int count = 0;
    vector<int> prev_arr;

    while (prev_arr != arr) {
        prev_arr = arr;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
            } else if (arr[i] < 50 && arr[i] % 2 != 0) {
                arr[i] = arr[i] * 2 + 1;
            }
        }
        count++;
    }
    return count - 1;
}