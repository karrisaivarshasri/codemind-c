#include<stdio.h>
int main() {
    int l,n,a,b,i; scanf("%d%d",&l,&n);
    for(i=1;i<=n;i++) {
        scanf("%d%d",&a,&b);
        if(a<l||b<l) {
            printf("UPLOAD ANOTHER
");
        }
        else if(a>=l&&b>=l) {
            if(a==b) {
                printf("ACCEPTED
");
            }
            else {
                printf("CROP IT
");
            }
        }
    }
}