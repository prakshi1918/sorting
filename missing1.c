#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a,n,i=0,s=0,d=0,sa=0;
printf("enter the limit");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(i=1;i<=n-1;i++)
{
scanf("%d",&a[i]);
sa=sa+a[i];
s=s+i;
}
s=s+n;
d=s-sa;
printf("%d is number",d);
return 0;
}

