#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,m,s,t;
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        t=m%10;
        s=s+fact(t);
        m=m/10;
    }
    if(s==n)
    printf("Strong number");
    else
    printf("Not strong number");
    return 0;
    
}
