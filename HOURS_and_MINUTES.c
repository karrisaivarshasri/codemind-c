#include<stdio.h>
int main() {
    int n,m,h;
    scanf("%d",&n);
    h=n/60;m=n%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}