#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string age2 = to_string(age);
    for(int i = 0; i < age2.size(); i++){
        if(age2[i] == '0'){
            answer += "a";
        }
        else if(age2[i] == '1'){
            answer += "b";
        }
        else if(age2[i] == '2'){
            answer += "c";
        }
        else if(age2[i] == '3'){
            answer += "d";
        }
        else if(age2[i] == '4'){
            answer += "e";
        }
        else if(age2[i] == '5'){
            answer += "f";
        }
        else if(age2[i] == '6'){
            answer += "g";
        }
        else if(age2[i] == '7'){
            answer += "h";
        }
        else if(age2[i] == '8'){
            answer += "i";
        }
        else if(age2[i] == '9'){
            answer += "j";
        }
    }
    return answer;
}