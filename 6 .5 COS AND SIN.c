#include<stdio.h>
#include<math.h>
void main()
{


    int n,i, m=1,f,j,sign=1;
    float xdeg, s=0,xrad,p;
    printf("enter no.of steps");
    scanf("d",&n);
    printf("enter angle value");
    scanf("%f",&xdeg);
    xrad=xdeg*3.14/180;
    for(i=1;i<n;i++);
{


        f=1;
        for(i=1;i<=m;i++)
       f=f*1;
       p=(sign)*pow(xrad,m);
       s=s+(p/n);
       sign=(-1)*sign;
       m=m+2;

}
    printf("value=%f",s);
}
