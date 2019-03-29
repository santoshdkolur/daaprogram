#include <stdio.h>
int v[20][20],values[20],weights[20],n,w,profit;
int main()
{
    int i,j;
    printf("Enter number of items:\n");
    scanf("%d",&n);
    printf("Enter knapsack capacity:\n");
    scanf("%d",&w);
    printf("Enter the value of n items:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&values[i]);
    printf("Enter the weights of n items:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&weights[i]);
    for(i=0;i<=n;i++)
        for(j=0;j<=w;j++)
            if(i==0||j==0)
                v[i][j]=0;
            else
                v[i][j]=-1;
    profit=MFK(n,w);
    printf("Profit=%d\n\n",profit);
}
int MFK(int i,int j)
{
    int value;
    if(v[i][j]<0)
    {
        if(j<weights[i])
            value=MFK(i-1,j);
        else
            value=max(MFK(i-1,j),values[i]+MFK(i-1,j-weights[i]));
        v[i][j]=value;
    }
    return v[i][j];
}
int max(int a,int b)
{
    if(a<b)
        return b;
    else
        return a;
}
