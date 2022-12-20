#include<stdio.h>
int fun(int n) {
    int i,f=1;
    for(i=1;i<=n;i++) {
        f=f*i;
    }
    return f;
}
int main() {
    int n,i,s=0;
    scanf("%d",&n);
    i=n;
    while(i!=0) {
        s=s+fun(i%10); i=i/10;
    }
    if(s==n) printf("The number %d is a strong number",n);
else  printf("The number %d is not a strong number",n);
}