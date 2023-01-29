#include<stdio.h>

// Recursion code find the factorial of number

void main()
{
    int n;
    long int factorial(int n);
    printf("n = ");
    scanf("%d", &n);
    printf("n! = %d\n",factorial(n));
}
long int factorial(int n)
{
    if (n<=1)
        return(1);
    else
        return(n * factorial(n-1));
}


// print the text in backward order
// #define EOL '\n'
// void main(){
//     void reverse(void);
//     printf("enter a text \n");
//     reverse();
// }
// void reverse(void)
// {
//     char c;
//     if ((c = getchar()) != EOL) reverse();
//     putchar(c);
//     return;

// }