#include<stdio.h>
int main() {
    int n,i,flag=0,avg,s=0,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++) {
        if(avg==a[i]) {
            flag=1;
            break;
        }
    }
    if(flag==1) {
        printf("True");
    }
    else { 
        printf("False");
    }
}