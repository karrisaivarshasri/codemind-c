#include<stdio.h>
int main() {
    int n,i,s=0,pdt=1;
    scanf("%d",&n);
    while(n!=0) {
        i=n%10;n=n/10;s+=i;pdt=pdt*i;
    }
    if(s==pdt) printf("Spy Number");
    else printf("Not Spy Number");
}