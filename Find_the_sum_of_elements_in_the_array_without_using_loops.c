#include<stdio.h>
int main() {
    int n,i,s=0; scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d",s);
}