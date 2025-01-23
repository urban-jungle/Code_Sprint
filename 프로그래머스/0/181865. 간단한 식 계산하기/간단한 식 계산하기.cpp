#include <string>
#include <sstream>
using namespace std;

int solution(string binomial) {
    stringstream ss(binomial);
    string a_str, op, b_str;
    ss >> a_str >> op >> b_str;

    int a = stoi(a_str);
    int b = stoi(b_str);

    if (op == "+"){
        return a + b;
    }
    else if (op == "-"){
        return a - b;
    }
    else if (op == "*"){
        return a * b;
    }

    return 0;
}