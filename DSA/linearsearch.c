#include<stdio.h>
int main()
{
    printf("Dhruv Agarwal \n 22BIT0562\n");
    int a[]={5,4,3,8,9,2};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Enter key:\n");
    int key;
    scanf("%d",&key);
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            index=i;    
        }
    }
    if(index==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position:%d",index+1);
    }
}