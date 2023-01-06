#include<stdio.h>
int main() {
    int c,s,p,l; scanf("%d%d",&c,&s);
    p=s-c; l=c-s;
    if(s>c) printf("Profit");
    else printf("Loss");
}