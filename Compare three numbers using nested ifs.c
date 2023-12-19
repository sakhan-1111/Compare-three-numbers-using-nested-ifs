#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c){if(b>c){
    printf("%f is the biggest number\n%f is the 2nd biggest number\n%f is the smallest number",a,b,c);}
    else{
    printf("%f is the biggest number\n%f is the 2nd biggest number\n%f is the smallest number",a,c,b);}
    }
    if(b>a&&b>c){if(a>c){
    printf("%f is the biggest number\n%f is the 2nd biggest number\n%f is the smallest number",b,a,c);}
    else{
    printf("%f is the biggest number\n%f is the 2nd biggest number\n%f is the smallest number",b,c,a);}
    }
    if(c>b&&c>a){if(b>a){
    printf("%f is the biggest number\n%f is the 2nd biggest number\n%f is the smallest number",c,b,a);}
    else{
    printf("%f is the biggest number\n%f is the 2nd biggest number\n%f is the smallest number",c,a,b);}
    }
    return 0;
}
