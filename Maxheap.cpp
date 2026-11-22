#include <stdio.h>

void heap(int a[],int n,int i)
{
    int l=2*i+1,r=2*i+2,m=i,t;

    if(l<n && a[l]>a[m]) m=l;
    if(r<n && a[r]>a[m]) m=r;

    if(m!=i)
    {
        t=a[i]; a[i]=a[m]; a[m]=t;
        heap(a,n,m);
    }
}

int main()
{
    int a[]={4,10,3,5,1},n=5,i,t;

    for(i=n/2-1;i>=0;i--)
        heap(a,n,i);

    for(i=n-1;i>0;i--)
    {
        t=a[0]; a[0]=a[i]; a[i]=t;
        heap(a,i,0);
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
