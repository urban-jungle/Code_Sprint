#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> clothes_count;
    int answer = 1; // 곱셈해줘야하기 때문에 항등원인 1 사용
    for (auto& cloth : clothes) {
        clothes_count[cloth[1]]++; //옷 종류 개수 세기(중복제거)
    }

    for (auto& pair : clothes_count) {
        answer *= (pair.second + 1); 
        // pair.first는 옷의 종류, pari.second는 해당 옷 종류의 개수
    }

    return answer - 1;
}