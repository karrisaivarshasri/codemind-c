#include<stdio.h>
int main() {
    int p,c,b,m,ch,a,t;
    scanf("%d%d%d%d%d",&p,&ch,&b,&m,&c);
    a=(p+ch+b+m+c);
    t=(a/5);
    if(t>=40&&t<=60){
        printf("Grade E");
    }
    else if(t>=90){
        printf("Grade A");
    }
    else if(t>=80&&t<90){
        printf("Grade B");
    }
    else if(t>=70&&t<80){
        printf("Grade C");
    }
    else if(t>=60&&t<70){
        printf("Grade D");
    }
    else if(t>40){
        printf("Grade F");
    }
}