#include<stdio.h>
#include<conio.h>
int main()
{
    int *a,n=0,i=0,k=0,tmp=0,j=0,c1=1,c2=1,p=0;
    printf("enter limit");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int));
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    tmp=a[i];
    j=i-1;
    while(j>=0 && tmp<a[j])
    {
       a[j+1]=a[j];
       j--;
    }
    a[j+1]=tmp;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            c1++;
        }
        if(a[i]!=a[1+i])
        {
            c1=1;
        }
        if(c1>c2)
        {
            c2=c1;
            p=i;
        }
    }
    printf("max time repeated no is %d",a[p]);
return 0;
}
