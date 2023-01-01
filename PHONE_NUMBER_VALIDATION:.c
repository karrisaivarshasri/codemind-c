#include<stdio.h>
#include<math.h>
int main() {
    long long int n;
    scanf("%lld",&n);
    int d;
    d=log10(n)+1;
    if(d==10) {
        printf("Valid");
    }
    else printf("Invalid");
}