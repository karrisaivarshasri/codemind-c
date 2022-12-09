#include<stdio.h>
int main() {
    float b,g,d,h;
    scanf("%f",&b);
    if(b<=10000) {
        d=b*0.8;h=b*0.2;
    }
    else if(b<=20000) {
        d=b*0.9;h=b*0.25;
    }
    else {
        d=b*0.95;h=b*0.3;
    }
    g=b+h+d;
    printf("%.2f",g);
}