#include<stdio.h>
int main() {
    int n,t,i,s=0,p=1; scanf("%d",&n);
    while(n>0) {
        i=n%10;
        if(i%2==0) {
            t=1;
        }
        else {
            t=0;
        }
        s=s+t;
        p=p*t;
        n=n/10;
    }
    if(s==0&&p==0) {
        printf("Odd");
    }
    else if(s>0&&p==1) {
        printf("Even");
    }
    else {
        printf("Mixed");
    }
}