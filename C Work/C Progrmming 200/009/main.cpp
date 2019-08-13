#include <iostream>
#include <cstdio>
int leap(int a)
{
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}
int number(int year, int m, int d)
{
    int sum=0,i,j,k,a[12]=
            {
            31,28,31,30,31,30,31,31,30,31,30,31
            };
    int b[12]=
            {
            31,29,31,30,31,30,31,31,30,31,30,31
            };
    if (leap(year)==1)
        for (i = 0; i < m-1; i++)
            sum+=b[i];
    else
        for (i = 0; i < m-1; i++)
            sum+=a[i];
    for (j=2011;j<year;j++)         //从2011年开始三天打一次鱼，两天休息一次
        if (leap(j)==1)
            sum+=365;
    sum+=365;
    sum+=d;
    return sum;
}

int main() {
    int year,month,day,n;
    printf("please enter year month day\n");
    scanf("%d%d%d",&year,&month,&day);
    n=number(year,month,day);
    if ((n%5)<4 && (n%5)>0)
        printf("%d:%d:%d fishing\n",year,month,day);
    else
        printf("%d:%d:%d realxing\n",year,month,day);
}