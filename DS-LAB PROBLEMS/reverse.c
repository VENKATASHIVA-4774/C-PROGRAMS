#include<stdio.h>
#include<math.h>
int main(){
    long long n,reverse=0,rem;
    scanf("%lld",&n);

    for(int i=1;n!=0;i++){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(reverse>=(-pow(2,31))&& reverse<=(pow(2,31)-1)){
        printf("%lld",reverse);
    }
    else{
        printf("0");
    }

    return 0;
}