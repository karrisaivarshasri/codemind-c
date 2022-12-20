#include<stdio.h>
#include<math.h>
int main() {
    int n,k,p,last,temp,first=0,rev=0,diff;
    scanf("%d%d",&n,&k);
    p=pow(10,k); last=n%p;
    while(n>0) {
        rev=rev*10+n%10;n=n/10;
    }
    temp=rev%p;
    while(temp>0) {
        first=first*10+temp%10;temp=temp/10;
    }
    diff=abs(last-first);
    printf("%d",diff);
}