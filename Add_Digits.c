#include<stdio.h>
int main() {
    int n,d,s=0; scanf("%d",&n);
    while(n>0||s>9) {
        if(n==0) {
            n=s;s=0;
        }
        s+=n%10;n/=10;
    }
    printf("%d",s);
}