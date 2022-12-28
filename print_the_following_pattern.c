#include<stdio.h>
int main() {
    int n; scanf("%d",&n); char c1,c2;
    for(c1=65;c1<=(64+n);c1++) {
        for(c2=65;c2<=(64+n);c2++)
        printf("%c ",c1); printf("
");
    }
}