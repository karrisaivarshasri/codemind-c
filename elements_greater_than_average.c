#include<stdio.h>
#include<math.h>
int main() {
    int i,n,a[n],c=0,avg,s=0; scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        s=s+a[i];
    }
avg=floor(s/n); for(i=0;i<n;i++) {
    if(a[i]>=avg) c++;
}
printf("%d",c);
}