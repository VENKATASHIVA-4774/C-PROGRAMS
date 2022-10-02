#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a1[i]>a1[j]){
                int temp=a1[i];
                a1[i]=a1[j];
                a1[j]=temp;
            }
        }

    }
    for(int i=0;i<n;i++){
        printf("%d\t",a1[i]);
    }
    return 0;
}