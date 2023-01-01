#include<stdio.h>
int main() {
    int n,k,max,a[n],g,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    max=a[0];
    for(i=0;i<n;i++) 
    if(max<a[i])
    max=a[i];
    for(i=0;i<n;i++) {
        g=a[i]+k;
        if(g>=max) printf("True ");
        else printf("False ");
    }
}