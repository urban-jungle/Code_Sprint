#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.size(); i++){
        myString[i] = tolower(myString[i]);
    }
    answer = myString;
    return answer;
}