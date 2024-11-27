#include <stdio.h>
#include <math.h>
int main(){
    int n=1;
    float a,b,c,fc,fa,fb,er,x;
    a=0.0;
    b=1.0;
    c=(a+b)/2;
    er=b-c;
    fa=a-exp(-(a*a));
    fb=b-exp(-(b*b));
    fc=c-exp(-(c*c));
    x=fc*fa;
    printf("%s%13s%13s%13s%13s%13s%13s%13s%13s\n","n","a","b","c","er","fa","fb","fc","x");
    for(n=1;n<=4;n++){
        c=(a+b)/2;
        fa=a-exp(-(a*a));
        fb=b-exp(-(b*b));
        fc=c-exp(-(c*c));
        x=fc*fa;
        er=b-c;
        printf("%7d%13f%13f%13f%13f%13f%13f%13f%13f\n",n,a,b,c,er,fa,fb,fc,x);
        if(x<0){
            b=c;
        }else if(x>0){
            a=c;
        }
    }
}
