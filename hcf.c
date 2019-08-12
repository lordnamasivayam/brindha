#include<stdio.h>
int main()
{
    int a,b,x,y,r,hcf,lcm;
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    hcf = a;
    printf("%d\n",hcf);
    return 0;
}
