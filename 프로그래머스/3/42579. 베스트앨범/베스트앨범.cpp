#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool compare1(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    else{
        return a.first > b.first;
    }
}

bool compare2(pair<string, int> a, pair<string, int> b){
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> music1; //장르명, 총 재생횟수
    unordered_map<string, vector<pair<int, int>>> music2; //장르명, 재생횟수, 고유번호
    for(int i=0; i<genres.size(); i++){
        music1[genres[i]] += plays[i];
        music2[genres[i]].push_back(make_pair(plays[i], i));
    }
    for(auto& v: music2){
        sort(v.second.begin(), v.second.end(), compare1);
    }
    vector<pair<string, int>> v_music1(music1.begin(), music1.end());
    sort(v_music1.begin(), v_music1.end(), compare2);
    for(auto& v: v_music1){
        for(int i=0; i<music2[v.first].size(); i++){
            answer.push_back(music2[v.first][i].second);
            if(i==1){
                break;
            }
        }
    }
    return answer;
}