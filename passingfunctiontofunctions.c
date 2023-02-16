#include<stdio.h>
void main(){
    int i,j;
    // int process();
    // int funct1();
    // int funct2();
    
    // int process (int (*)(int , int));
    // int funct1(int,int);
    // int funct2(int,int);
    
    int process(int (*pf)(int a, int b));
    int funct1(int a,int b);
    int funct2(int a,int b);

    i= process(funct1);
    printf("\n i=%d",i);
    j= process(funct2);
    printf("\n j=%d",j);
}
// int process(pf)
// int (*pf)();

// int process(pf)
// int (*pf)(int,int);

int process(int (*pf)(int a, int b))
{
    int a=9,b=6,c;
    c=(*pf)(a,b);
    return c;
}
// int funct1(a,b)
// int a,b;
int funct1(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int funct2(int a,int b){
    int c;
    c=a*b*a*b;
    return c;
}