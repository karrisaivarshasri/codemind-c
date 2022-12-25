#include<stdio.h>
int main() {
    int n; float a,s,t; scanf("%d",&n);
    printf("Units Consumed: %d
",n);
    if(n<=199) {
        a=n*1.20;
        printf("Cost per Unit: 1.20
");
    }
    else if(n>=200&&n<400) {
        a=n*1.40;
        printf("Cost per Unit: 1.40
");
    }
    else if(n>=400&&n<600) {
        a=n*1.60;
        printf("Cost per Unit: 1.60
");
    }
    else if(n>=600&&n<800) {
        a=n*1.80;
        printf("Cost per Unit: 1.80
");
    }
    else {
        a=n*2.00;
        printf("Cost per Unit: 2.00
");
    }
    printf("Bill: %.2f
",a);
    if(a>400) {
        s=a*0.15;
        printf("Surcharge: %.2f
",s);
    }
    else {
        printf("Surcharge: 0.00
");
    }
    t=a+s;
    printf("Total Amount: %.2f
",t);
}