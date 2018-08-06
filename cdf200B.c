#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float sum = 0;
    double ans;
    
    int ara[101];
    scanf("%d",&n);
    for(i = 0; i < n;i++)
    {
        scanf("%d",&ara[i]);

    }
    for(i = 0; i < n;i++)
    {
        sum = sum + ara[i];

    }
    ans= sum/n;
    
    printf("%lf\n",ans);

}