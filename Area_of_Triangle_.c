#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,s,d;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2; 
    d=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",d);
}