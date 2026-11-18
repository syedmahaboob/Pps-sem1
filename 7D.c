#include<stdio.h>
int main()
{
     int key,a[5],n,i, found=0;
     printf("enter the 5 values");
     for(i=0;i<5;i++)
        scanf("%d", a[5]);
     printf("enter search else");
     scanf("%d",&key);
     for(i=0;i<5;i++)
     {
          if(key==a[i])
     {
         found=1;
         printf("element is found %d", i+1);
         break;
     }
     }
    if (found==0)
        printf("element not found");
        return 0;
}
