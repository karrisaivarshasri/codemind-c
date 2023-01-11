#include<stdio.h>
int main() {
    int n,R,r=0; scanf("%d",&n);
    while(n!=0) {
        R=n%10;r=r*10+R; n/=10;
    }
    printf("%d",r);
}