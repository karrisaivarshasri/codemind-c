#include<stdio.h>
int main() {
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        if(i*(i+1)==n) {
            printf("YES");
            c=1;
            break;
        }
    }
    if(c==0) {
        printf("NO");
    }
}