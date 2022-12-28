#include<stdio.h>
int main() {
    int n,a[n],i,f=0; scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        if(a[i]%2==0) {
            if(i%2==0)
            f=1;
            else {
                f=0;
                break;
            }
        }
    }
    if(f==1) printf("True");
    else printf("False");
}