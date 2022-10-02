#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            arr[j]=a[i];
            j++;
        }
    }
    int k=n-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]>0){
            arr[k]=a[i];
            k--;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}