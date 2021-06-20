#include<cstdio>

int main(){
    int T,sum = 0;
    scanf("%d",&T);
    int n = T;
    int a[10]={0};
    while(T--){
        scanf("%d", &a[T]);
        sum += a[T];
    }
    sum = sum *(11 * (n - 1 ));
    printf("%d", sum);
    return 0;
}
