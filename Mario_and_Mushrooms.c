#include<stdio.h>
int main() {
    int n,r;
    scanf("%d",&n);
    r=n%3;
    if(n%3==0) 
        printf("NORMAL");
    else if(n%3==1) 
        printf("HUGE");
    else 
        printf("SMALL");
}