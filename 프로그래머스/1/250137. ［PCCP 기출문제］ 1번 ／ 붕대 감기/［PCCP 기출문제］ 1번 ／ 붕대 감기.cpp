#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int hp = health;
    int cnt1 = 0; //붕대 연속으로 감은 횟수
    int cnt2 = 0; //attacks 배열 증가용
    int attack_time = attacks[0][0]; //공격 시간
    int attack_power = attacks[0][1]; //몬스터의 공격력
    
    for(int i = 1; i <= attacks[attacks.size() - 1][0]; i++){
        if(attack_time == i){
            cnt1 = 0;
            hp -= attack_power;
            
            if(hp <= 0){
                return -1;
            }
            
            if((cnt2 + 1) < attacks.size()){
            cnt2 += 1;
            attack_time = attacks[cnt2][0];
            attack_power = attacks[cnt2][1];
            }
            
        }
        else{ 
            cnt1 += 1;
            hp += bandage[1];
            if(cnt1 == bandage[0]){
                cnt1 = 0;
                hp += bandage[2];
            }
            if(hp > health){
                hp = health;
            }
        }
    }
    return hp;
}