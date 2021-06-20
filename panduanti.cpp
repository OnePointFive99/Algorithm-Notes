#include<cstdio>

int main(){
    int n = 1, m = 1;
    scanf("%d%d", &n, &m);
    int stu_sco[n][m] = {0};
    int score[m] = {};
    int ans[m] = {};
    int result[n] = {};
    for(int i = 0; i < m; i++){
        scanf("%d", &score[i]);
    }
    for(int j = 0; j < m; j++){
        scanf("%d", &ans[j]);
    }
    for(int p = 0; p < n; p++){
            for(int q = 0; q < m; q++){
                int tmp;
                scanf("%d", &tmp);
                stu_sco[p][q] = (1 - (tmp^ans[q])) * score[q];
                result[p] += stu_sco[p][q];
            }

    }
    for(int num = 0; num < n; num++){
        printf("%d\n",result[num]);
    }



return 0;
}
