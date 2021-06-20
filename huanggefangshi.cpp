#include<cstdio>

int main(){
    int bai = 0, shi = 0, ge = 0;
    int number;
    scanf("%d", &number);
    ge = number % 10;
    shi = ((number % 100) - ge)/10;
    bai = number / 100;
    while(bai){
        printf("B");
        bai--;
    }
    while(shi){
        printf("S");
        shi--;
    }
    for(int i = 1; i <= ge; i++){
        printf("%d", i);
    }
       return 0;
}
