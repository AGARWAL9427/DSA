#include<stdio.h>
int main()
{
    printf("Dhruv Agarwal \n 22BIT0562\n");
    int n;
    printf("Enter number of number to be sorted\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter number\n");
        scanf("%d",&a[i]);
    }
    printf("original Array is\n");
    //int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
    printf("\nSorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}

