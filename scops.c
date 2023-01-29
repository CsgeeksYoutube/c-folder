//External variables

#include<stdio.h>
int sum =0;
int lines=0;
void main(){
    int n;
    float avg;
    int linecount(void);
    //printf("enter the text below\n");
    while((n = linecount())>0){
        sum +=n;
        ++lines;
        printf("\nthe sum is - %d",sum);
        printf("\nthe lines is - %d\n",lines);
    }
    avg= (float)sum/lines;
    printf("\n Average number of characters per line %5.2f",avg);
}
int linecount(void){
    char line[80];
    int count=0;
    //printf("enter the linecount function\n");
    while((line[count]=getchar())!= '\n')
        ++count;
    //printf("the count is %d",count);
    return (count);
}

// static variable---example of fibonacci number

// void main(){
//     int count,n;
//     long int fibonacci(int count);
//     printf("how many fibonacci number?");
//     scanf("%d",&n);
//     printf("\n");
//     for(count =1;count <=n;++count)
//         printf("\n i= %2d  F = %d",count,fibonacci(count));
// }
// long int fibonacci(int count)
// {
//     static long int f1=1,f2=1;
//     long int f;
//     f =(count<3)? 1:f1+f2;
//     f2=f1;
//     f1=f;
//     return(f);

// }
