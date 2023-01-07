#include<stdio.h>
int main() {
    int e,m,p,ch,c; scanf("%d%d%d%d%d",&e,&m,&p,&ch,&c);
    if(e>34&&m>34&&p>34&&ch>34&&c>34) {
        printf("PASSED");
    }
    else  {
        printf("FAILED");
    }
}