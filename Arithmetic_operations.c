#include<stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    float s,d,p,q,r;
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;
    r=a%b;
    printf("Sum:%.f
",s);
    printf("Difference:%.f
",d);
    printf("Product:%.f
",p);
    printf("Quotient:%.f
",q);
    printf("Remainder:%.f",r);
}