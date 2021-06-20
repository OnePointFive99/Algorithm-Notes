#include<cstdio>

int main(){
    int n = 1, team_no = 1, mate = 1, score = 0;
    scanf("%d", &n);
    int num = n;
    int team_list[1010] = {0};
    int max[2] = {0};
    while(num--){
        scanf("%d-%d %d", &team_no, &mate, &score);
        team_list[team_no] += score;
        if(team_list[team_no] > max[1]){
            max[1] = team_list[team_no];
            max[0] = team_no;
        }
    }
    printf("%d %d", max[0], max[1]);
    return 0;
}
