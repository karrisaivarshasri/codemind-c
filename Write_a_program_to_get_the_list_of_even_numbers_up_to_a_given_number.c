#include<stdio.h>
int main() {
    int n,i,s; scanf("%d%d",&s,&n);
    for(i=s;i<=n;i++) {
        if(i%2==0) {
            printf("%d ",i);
        }
    }
}