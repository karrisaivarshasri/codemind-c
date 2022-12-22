#include<stdio.h>
int main() {
    int n,r,s=0,c=1,p=1,i,a; scanf("%d",&n); a=n;
    while(a!=0) {
        s=(s*10)+a%10; a=a/10;
    }
    a=s;s=0;
    while(a!=0) {
        r=a%10;
        for(i=1;i<=c;i++) {
            p=p*r;
        }
        s=s+p; a=a/10; c++; p=1;
    }
    if(s==n) printf("True");
    else printf("False");
}