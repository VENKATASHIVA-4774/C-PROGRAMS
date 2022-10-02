#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        if(a1[i]==a1[i+1]){
            printf("%d\n",a1[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(a1[i]!=i+1){
            printf("%d",i+1);
        }
    }
    return 0;
}