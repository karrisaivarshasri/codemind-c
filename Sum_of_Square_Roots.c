#include<stdio.h>
#include<math.h>
int main() {
    int a,b,i;
    double sq,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sq=sqrt(i);
    sum=sum+sq;
    
    }
    //sq=sqrt(sum);
    printf("%.2lf",sum);
}