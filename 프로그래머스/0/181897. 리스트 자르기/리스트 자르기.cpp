#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int start = 0, end = num_list.size() - 1, step = 1;

    if (n == 1) {
        end = slicer[1];
    } else if (n == 2) {
        start = slicer[0];
    } else if (n == 3) {
        start = slicer[0];
        end = slicer[1];
    } else if (n == 4) {
        start = slicer[0];
        end = slicer[1];
        step = slicer[2];
    }

    for (int i = start; i <= end; i += step) {
        answer.push_back(num_list[i]);
    }

    return answer;
}