#include<stdio.h>
int main() {
    int i,j,n,k; scanf("%d",&n); int a[n],c=0;
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++) {
        c=0;
        for(j=1,k=n;j<=k;j++) {
            if(i!=j) {
                if(a[i]==a[j]) {
                    c++;
                }
            }
        }
        if(c==0) {
            printf("%d",a[i]);
        }
    }
}