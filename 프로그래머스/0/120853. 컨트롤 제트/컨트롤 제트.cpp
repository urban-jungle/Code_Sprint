#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> numbers;

    stringstream ss(s);
    string token;
    
    while (ss >> token) {
        if (token == "Z" && !numbers.empty()){
            answer -= numbers.back();
            numbers.pop_back();
        }
        else{
            int num = stoi(token);
            answer += num;
            numbers.push_back(num);
        }
    }
    return answer;
}