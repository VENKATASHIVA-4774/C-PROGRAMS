#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);

    int arr[n],brr[n];
    for (int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }

    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            if (arr[i]==brr[j])
            {
                count++;
            }
        }
    }
    if (count==n)
    printf("1"); 

    else 
    printf("0");   
    
    
    return 0;
}