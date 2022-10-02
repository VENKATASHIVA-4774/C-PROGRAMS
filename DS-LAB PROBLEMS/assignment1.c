#include<stdio.h>
int main(){
    int x;
    int diff;
    int max,min;
    scanf("%d",&x);
    int ar[x];
    for(int i=0;i<x;i++){
        scanf("%d",&ar[x]);
    }
    max=ar[0];
    min=ar[0];
    for(int i=1;i<x;i++){
        if(ar[i]<min){
            min=ar[i];
        }
        if(ar[i]>max){
            max=ar[i];
        }
    }
    diff=max-min;
    printf("%d",diff);
    return 0;
}