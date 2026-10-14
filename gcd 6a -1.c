#include<stdio.h>
int gcd(int n1, int n2);
int  main()
{
    int a,b,result;
    printf("enter two number");
    scanf("%d %d",&a,&b);
   result=gcd(a,b);
    printf("gcd of %d and %d is %d",a,b,result);

    return 0;
}
int gcd(int n1 ,int n2)
{
    if(n2!=0)
    return gcd(n2,n1%n2);
else
    return n1;
}
