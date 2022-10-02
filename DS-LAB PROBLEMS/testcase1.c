#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar1[n],ar2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar2[i]);
    }
    
    for (int i = 0; i < n; i++)
    for (int j =i+1 ; j < n; j++)
    {
        if (ar1[i]>ar1[j])
        {
            int temp = ar1[i];
            ar1[i]=ar1[j];
            ar1[j]= temp;
        }  
        if (ar2[i]>ar2[j])
        {
            int temp = ar2[i];
            ar2[i]=ar2[j];
            ar2[j]= temp;
        } 
    }
    int r=n+1;
    for (int i = 0; i < n; i++)
    {
        if (ar1[i]==ar2[i])
        {
            r=r-1;
            if (r==1)
            {
                printf("1");
            } 
        }
        
    }
    if (r!=1)
    {
        printf("0");
    }
}