#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> pos;

    for (int i = 0; i < players.size(); i++){
        pos[players[i]] = i;
    }

    for (const string& call : callings){
        int curPos = pos[call];
        if (curPos > 0){
            string frontPlayer = players[curPos - 1];
            swap(players[curPos], players[curPos - 1]);

            pos[call] = curPos - 1;
            pos[frontPlayer] = curPos;
        }
    }
    return players;
}