#include<stdio.h>
int main() {
    int rev=0,n,r,temp; scanf("%d",&n);
    temp=n;
    while(n!=0) {
        r=n%10; rev=rev*10+r; n=n/10;
    }
    if(rev==temp) printf("Palindrome");
    else printf("Not Palindrome");
}