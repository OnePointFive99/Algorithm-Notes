#include<cstdio>

int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    m=m%n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     //printf("%d",a[n-m]);

    for(int i=0;i<n;i++)
    {

        int x=(n-m+i)%n;
        printf("%d",a[x]);
        if(i < n - 1)printf(" ");
    }
//  printf("\n");
    return 0;
}
