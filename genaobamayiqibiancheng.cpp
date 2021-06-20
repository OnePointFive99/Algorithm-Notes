#include<cstdio>
#include<cmath>

int main(){
    double col = 0;
    char c = ' ';
    scanf("%lf %c",&col, &c);
    double row = round(col/2);

    for(int i = 0;i < row; i++){
            for(int j = 0; j < col; j++){
                    if(i != 0 && i != row - 1 ){
                        if(j == 0){
                            printf("%c",c);
                        }
                        else if(j == col -1){
                            printf("%c\n",c);
                        }
                        else{
                            printf(" ");
                        }
                    }
                    else if(j == col - 1){
                            printf("%c\n",c);
                    }
                    else{
                        printf("%c", c);
                    }
            }

        }
    return 0;
}
