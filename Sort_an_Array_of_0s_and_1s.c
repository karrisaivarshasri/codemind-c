#include<stdio.h>
int main() {
    int i,n,j,temp; scanf("%d",&n); int a[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++) {
        for(j=i+1;j<=n;j++) {
            if(a[i]>a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=1;i<=n;i++) {
        printf("%d ",a[i]);
    }
}