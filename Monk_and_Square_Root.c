#include<stdio.h>
#include<math.h>
int main() {
    long long int t,x,i,s=0,n,m,f=0;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld%lld",&n,&m);
        f=0;
        for(i=0;i<=n||i<=m;i++) {
            s=(i*i)%m;
            if(s==n) {
                printf("%lld
",i);
                f=1;
                break;
            }
            s=0;
        }
        if(f==0) {
            printf("-1
");
        }
    }
}