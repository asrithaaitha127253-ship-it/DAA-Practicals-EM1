#include <stdio.h>

int main()
{
    int a[]={10,20,30,40,50},key=30;
    int l=0,h=4,mid;

    while(l<=h)
    {
        mid=(l+h)/2;

        if(a[mid]==key)
        {
            printf("Found at %d",mid+1);
            return 0;
        }
        else if(a[mid]<key)
            l=mid+1;
        else
            h=mid-1;
    }

    printf("Not Found");
    return 0;
}
