#include<stdio.h>
int main() {
    int m,n,o; scanf("%d%d%d",&m,&n,&o);
    o=21-(m+n);
    if(o>10) printf("%d",-1);
    else printf("%d",o);
}