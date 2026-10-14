#include<stdio.h>
int sum(int n);
int  main()
{
    int n,s;
    printf("enter a number:");
    scanf("%d,&n");
    s=sum(s);
    printf("sum of the first %d natural numbers is %d",n,s);
    return 0;
}
int sum(int n)
{
    if(n=0||n==1)
    return 1;
else
    return n=sum(n-1);
}
