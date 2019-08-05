#include <stdio.h>
main() {
    int a ,b,c,t;
    printf("please input a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a>c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }
    printf("the order of the number is:\n");
    printf("%d,%d,%d",a,b,c);
    return 0;
}