#include<stdio.h>
#include<math.h>
int main() {
    int n,i,a,s=0;
    scanf("%d",&n);
    i=n*n;
    while(i!=0) {
        a=i%10;s+=a;i=i/10;
    }
    if(s==n) printf("Neon Number");
    else printf("Not Neon Number");
}