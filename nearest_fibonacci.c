#include<stdio.h>
int main() {
    int f=0,s=1,next=0,n;
    scanf("%d",&n);
    while(n>next) {
        next=f+s;f=s;s=next;
    }
    if(n-f<s-n) {
        printf("%d",f);
    }
    else if(n-f==s-n) {
        printf("%d %d",f,s);
    }
    else {
        printf("%d",s);
    }
}