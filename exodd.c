#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i=0,nm=0;
    printf("enter the limit");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    nm=a[0];
    for(i=0;i<n-1;i++)
    {
        nm=nm^a[i+1];
    }
    printf("odd no of time occuring  no is %d",nm);
return 0;
}
