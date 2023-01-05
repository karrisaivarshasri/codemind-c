#include<stdio.h>
int main() {
    int x,y,z; scanf("%d%d%d",&x,&y,&z);
    z=21-(x+y);
    if(z>10) printf("%d",-1);
    else printf("%d",z);
    return 0;
}