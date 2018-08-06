#include<stdio.h>
int main()
{
    int n,i,x = 0;
    int k;
    int p[100],q[100];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d %d",&p[i],&q[i]);
    }
    for(i = 0;i < n;i++)
    {
        k = fabs(q[i] - p[i]);
        if(k >= 2)
        {
            x++;
           
        }
        else
        {
            continue;
            
        }
   }
    printf("%d\n",x);
    
    return 0;

}