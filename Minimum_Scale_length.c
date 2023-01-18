#include<stdio.h>
int main() {
    int n,i,min; scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    int j=1;
    while(j<n) {
        if(arr[j]%min==0) {
            j++;
        }
        else {
            min=arr[j]%min;
            i++;
        }
    }
    printf("%d",min);
}