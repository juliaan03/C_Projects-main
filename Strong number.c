#include<stdio.h>
void main()
{
    int n,sum,org,s,k=0;
    printf("Enter the number ");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        s=n%10;
        sum=1;
        for(int i=1;i<=s;i++)
        {
            sum=sum*i;
            //printf("%d\n",sum);
        }
        k+=sum;
        n=n/10;
    }
    if(org==k)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a Strong number");
    }
}