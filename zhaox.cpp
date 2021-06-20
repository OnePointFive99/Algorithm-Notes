#include<cstdio>
#define MAXN 210
int a[MAXN] = {};

int main(){
    int n,x;

    while(scanf("%d",&n) != EOF){
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        scanf("%d", &x);
        for(int j = 1; j <= n; j++){
            if(x == a[j]){
                printf("%d",j);
                break;
            }
        }

    }


    return 0;
}
