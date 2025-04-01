#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial){
    int xnum = 0;
    int num = 0;
    stringstream ss(polynomial);
    string term;

    while (ss >> term){
        if (term == "+"){
            continue;
        }
        if (term.find('x') != string::npos){
            if (term == "x"){
                xnum += 1;
            } 
            else{
                xnum += stoi(term.substr(0, term.find('x')));
            }
        } 
        else{
            num += stoi(term);
        }
    }

    string answer = "";
    if (xnum > 0){
        answer += (xnum == 1 ? "x" : to_string(xnum) + "x");
    }
    if (num > 0){
        if (!answer.empty()){
            answer += " + ";
        }
        answer += to_string(num);
    }

    return answer;
}