#include<stdio.h>
#include<math.h>
int main() {
    int n,sq,p,d,k;  scanf("%d",&n);
    d=log10(n)+1; sq=n*n; p=pow(10,d); k=sq%p;
    if(k==n) printf("Automorphic Number");
    else printf("Not an Automorphic Number");
}