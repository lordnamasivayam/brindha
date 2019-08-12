#include<stdio.h>
int main()
{
    int r,a,b,x,y,lcm,hcf;
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    printf("%d\n%d",lcm,hcf);
    return 0;
}
