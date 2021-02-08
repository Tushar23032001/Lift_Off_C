#include <stdio.h>
int main() {
    float a,b,c,d,e,s,p;
    printf("enter the marks\n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    p=(s/500)*100;
    if(p>=90){
        printf("percentage is%f\ngrade=A",p);
    }
    else if(p>=80){
        printf("percentage is%f\ngrade=B",p);
    }
    else if(p>=70){
        printf("percentage is%f\ngrade=C",p);
    }
    else if(p>=60){
        printf("pecentage is%f\ngrade=D",p);
    }
      else if(p>=40){
        printf("percentage is%f\ngrade=E",p);
    }
    else{
        printf("percentage is%f\ngrade=F",p);
    }

}

