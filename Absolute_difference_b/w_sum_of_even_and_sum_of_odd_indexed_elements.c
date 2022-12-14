#include<stdio.h>
#include<math.h>
int main() {
    int n,i,sum1=0,sum2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        if(i%2==0) {
            sum1=sum1+a[i];
        }
        else {
             sum2=sum2+a[i];
        }
    }
    printf("%d",abs(sum1-sum2));
}