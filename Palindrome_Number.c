#include<stdio.h>
int main() {
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        int n,i,rev=0,d,p;
        scanf("%d",&n); p=n;
        while(n>0) {
            d=n%10; n=n/10; rev=rev*10+d;
        }
        if(rev==p) {
            printf("True");
        }
        else {
            printf("False");
        }
        printf("
");
    }
}