#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int a1[n],a2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a1[i]==a2[j]){
                count++;
            }
        }
    }
    if(count==5){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;

}