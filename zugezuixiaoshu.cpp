#include<cstdio>

int main(){
    int a[10] = {};
    scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    int count = 0,min = 9;
    for(int i = 1; i< 10; i++){
        if(a[i]){
            count+=a[i];
            if(i<min)min = i;
        }
    }
    printf("%d", min);
    a[min]--;
    for(int i = 0; i< 10; i++){
        while(a[i]){
            printf("%d",i);
            a[i]--;
        }
    }

return 0;
}
