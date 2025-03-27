#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz){
    vector<string> answer;

    for (int i = 0; i < quiz.size(); i++){
        stringstream ss(quiz[i]);
        int a, b, result;
        char op, eq;

        ss >> a >> op >> b >> eq >> result;

        if (op == '+'){
            answer.push_back((a + b == result) ? "O" : "X");
        }
        else if (op == '-'){
            answer.push_back((a - b == result) ? "O" : "X");
        }
    }

    return answer;
}