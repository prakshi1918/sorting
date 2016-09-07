#include<stdio.h>
#include<stdlib.h>
void largediff(int [],int );
int main()
{
    int *a,n=0,i=0;
    printf("enter the limit");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largediff(a,n);
return 0;
}
void largediff(int a[],int n)
{
int h=0,r=0,i=0,j=0,d=0;
for(i=0;i<n;i++)
{
 r=n-1;
 for(j=i+1;j<n;j++)
 {
   if(a[i]<a[r])
   {
     d=a[r]-a[i];
   }
   if(d>h)
   {
    h=d;
   }
   r--;
 }
}
printf("largest diff %d",h);
}
