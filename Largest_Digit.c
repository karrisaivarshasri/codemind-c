#include<stdio.h>
int main() {
    int n,r,s=0;
    scanf("%d",&n);
    while(n>0) {
        r=n%10;
        n=n/10;
        if(r>s) {
            s=r;
        }
    }
    printf("%d",s);
    return 0;
}