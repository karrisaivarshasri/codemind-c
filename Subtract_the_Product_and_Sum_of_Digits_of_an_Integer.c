#include<stdio.h>
int main() {
    int n,s=0,p=1,r;
    scanf("%d",&n);
    while(n>0) {
        r=n%10;p=p*r;s=s+r;n=n/10;
    }
    if(s>p) printf("%d",s-p);
    else printf("%d",p-s);
}