#include<cstdio>

using namespace std;
int count(int n,int result){
     int num = n;
     if(num == 1)return result;
     if(num % 2 == 0){
         num /= 2;
         result++;
     }
     else {
         num = (3 * num + 1)/2;
         result++;
     }
     return count(num,result);
     //return 0;
 }

int main(){
    int result = 0,number = 0;
    scanf("%d",&number);
    result = count(number,result);
    printf("%d",result);
    return 0;
}
