#include<stdio.h>
int main(){
    int n,count=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            for(int j=i+1;j<n-1;j++){
                a[j]=a[j+1];
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%d ",a[i]);
    } 
    return 0;
}