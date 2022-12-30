#include<stdio.h>
int main() {
    int n,i=1,c=0;
    scanf("%d",&n);
    for(i;i<=n;i++) {
        int s=0;
        if(n%i==0) {
            int j=1;
            while(j<=i) {
                if(i%j==0) {
                    s++;
                }
                j++;
            }
            if(s!=2) {
                c++;
            }
        }
    }
    printf("%d",c);
}