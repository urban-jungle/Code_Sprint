#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct cmp{
    bool operator()(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }
};

int solution(vector<vector<int>> jobs) {
    int answer = 0, i = 0, t = 0;
    sort(jobs.begin(), jobs.end());
    priority_queue<vector<int>, vector<vector<int>>, cmp> pq;
    while(i < jobs.size() || !pq.empty()){
        while(i < jobs.size() && jobs[i][0] <= t){
            pq.push(jobs[i]);
            i++;
        }
        if(!pq.empty()){
            vector<int> job = pq.top();
            pq.pop();
            t += job[1];
            answer += t - job[0];
        }
        else{
            if(i < jobs.size()){
                t = jobs[i][0];
            }
        }
    }
    return answer/jobs.size();
}