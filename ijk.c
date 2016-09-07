#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a,n,i=0,j=0,k=0,s=0,f=0;
    printf("enter the limit");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      a[i]=a[i]*a[i];
    }
    for(i=0;i<n;i++)
      {
       s=0;
        for(j=i+1;j<n;j++)
         {
           s=a[i]+a[j];
           for(k=0;k<n;k++)
           {
             if(k!=i && k!=j)
             {
              if(s==a[k])
              {
                printf("\n1st index%d\n2nd index%d\nsum is on%d",i,j,k);
                break;
                f=1;
              }
             }
            }
        }
      }
      if(f==0)
      printf("not found");
return 0;
}
