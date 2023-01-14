#include<stdio.h>
int main() {
    int n,i,s,r,v; scanf("%d%d%d",&n,&s,&r);
    for(i=s;i<=r;i++) {
        v=n*i; printf("%d x %d = %d
",n,i,v);
    }
}