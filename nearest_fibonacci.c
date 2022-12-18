#include<stdio.h>
int main() {
    int first=0,second=1,next=0,n;
    scanf("%d",&n);
    while(n>next) {
        next=first+second;
        first=second;
        second=next;
    }
    if(n-first<second-n) {
        printf("%d",first);
    }
    else if(n-first==second-n) {
        printf("%d %d",first,second);
    }
    else printf("%d",second);
}