#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int temp = stoi(pos.substr(0,2)) * 60 + stoi(pos.substr(3,2)); //현재 위치를 초 단위로 나타냄
    int v_length = stoi(video_len.substr(0,2)) * 60 + stoi(video_len.substr(3,2));
    int o_start = stoi(op_start.substr(0,2)) * 60 + stoi(op_start.substr(3,2));
    int o_end = stoi(op_end.substr(0,2)) * 60 + stoi(op_end.substr(3,2));
    for(int i = 0; i<commands.size(); i++){
            if ((temp >= o_start) && (temp <= o_end)){
            temp = o_end;
            }
            if(commands[i] == "next"){
            temp += 10;
                if(temp >= v_length){
                    temp = v_length;
                }
                if ((temp >= o_start) && (temp <= o_end)){
                    temp = o_end;
                }
            }
            else{
                temp -= 10;
                if(temp < 10){
                    temp = 0;
                }
                if ((temp >= o_start) && (temp <= o_end)){
                    temp = o_end;
                }
            }
    }
    string min = ((temp / 60) < 10 ? "0" + to_string(temp / 60) : to_string(temp / 60));
    string sec = ((temp % 60) < 10 ? "0" + to_string(temp % 60) : to_string(temp % 60));
    answer = min + ":" + sec;
    return answer;
}