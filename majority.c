#include<stdio.h>
#include<stdlib.h>
void major(int[],int);
int main()
{
    int *a,n=0,i=0,j=0,tmp=0;
    printf("entr the limit");
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
        while(j>=0 &&  tmp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tmp;
    }
    major(a,n);
}
void major(int a[],int n)
{
    int m=0,i=0,c=0;
    m=a[n/2];
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c++;
        }
    }
    if(c>n/2)
    {
        printf("majority is %d",a[n/2]);
    }
    else
    {
        printf("not found");
    }
}
