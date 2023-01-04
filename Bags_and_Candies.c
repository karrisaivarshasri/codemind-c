#include<stdio.h>
int main() {
    int n,m,k,c; scanf("%d%d%d",&n,&k,&m);
    c=k*m;
    if(n%c==0) printf("%d",n/c);
    else printf("%d",n/c+1);
}