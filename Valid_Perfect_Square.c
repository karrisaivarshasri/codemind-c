#include<stdio.h>
int main() {
    int t; scanf("%d",&t);
    for(int i=1;i<=t;i++) {
        int n,f=0; scanf("%d",&n);
        for(int j=1;j<=n;j++) {
            if(n==j*j)
            f=1;
        }
        if(f==1) printf("True
");
        else printf("False
");
    }
}