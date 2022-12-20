#include<stdio.h>
int main() {
    int k,i,d,n,s=0;
    scanf("%d",&n); k=n*n;
    while(n>0) {
        d=n%10;s=s*10+d;n=n/10;
    }
    int b,c,f,rev=0;
    b=s*s;
    while(b>0) {
        f=b%10;rev=rev*10+f;b=b/10;
    }
    if(rev==k) printf("True");
    else printf("False");
}