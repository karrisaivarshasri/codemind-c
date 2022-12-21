#include<stdio.h>
int main() {
    int x=0,y=1,c,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("%d ",x);
        c=x+y;x=y;y=c;
    }
}