#include<stdio.h>
#include<stdlib.h>
void close(int [],int);
int abs(int);
int main()
{
    int *a,n=0,i=0,tmp=0,j=0;
    printf("enter the limit");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    tmp=a[i];
    j=i-1;
    while(j>=0 && tmp <a[j])
    {

        a[j+1]=a[j];
        j--;
    }
    a[j+1]=tmp;
    }
    close(a,n);
return 0;
}
void close(int a[],int n)
{
    int l=0,r=n-1,min=0,h=0,p1=0,p2=0;
    min=a[l]+a[r];
    while(l!=r-1)
    {
        r--;
        h=a[l]+a[r];
        if(abs(min)>abs(h))
         {
            min=h;
            p1=l;
            p2=r;
        }
        else
        {

        l++;
        h=a[l]+a[r];
        if(abs(min)>abs(h))
        {
            min=h;
            p1=l;
            p2=r;
        }
    }
}
printf("\n%d\n%d",a[p1],a[p2]);
}
int abs(int s)
{
    if(s>0)
    return (s);
    else
    return (s*-1);
}
