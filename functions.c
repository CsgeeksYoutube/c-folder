#include<stdio.h>
// void main()
// {
//     char lower,upper;
//     char lower_to_upper(char lower);
//     printf("enter a lower-case character");
//     scanf("%c",&lower);
//     upper = lower_to_upper(lower);
//     printf("\n the upper-case equivalent is %c\n\n",upper);
// }
 
// char lower_to_upper(char c1)
// {
//     char c2;
//     c2=(c1 >= 'a' && c1<='z') ?('A' + c1 - 'a'): c1;
//     return(c2);
// }

// determine the largest of three integer quantities

int maximum(int x, int y)
{
    int z;
    z =(x>=y)? x:y;
    return (z);
}
void main()
{
    int a,b,c,d;
    printf("\n a = ");
    scanf("%d",&a);
    printf("\n b = ");
    scanf("%d",&b);
    printf("\n c = ");
    scanf("%d",&c);

    
    printf("\n maximum = %d ", maximum(c,maximum(a,b)));
}




