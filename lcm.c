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
    lcm = (x*y)/a;
    printf("%d\n",lcm);
    return 0;
}
