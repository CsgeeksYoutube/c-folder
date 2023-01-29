#include<stdio.h>
#include<ctype.h>
void main()
// {
//     int digit=10;
    
//     while (digit <= 9){
//         printf("%d\n",++digit);
        
//     }
// }
// #define EOL '\n'
// {
//     int count=0,tag;
//     char letter[80];
    
//     while((letter[count]=getchar())!= EOL) ++count;
//     tag=count;
//     count=0;
//     while(count<tag){
//         putchar(toupper(letter[count++]));
//     }

// }

// {
//     int n,count =1;
//     float x,average,sum=0;
//     printf("how many number?");
//     scanf("%d",&n);
//     while(count <= n){
//         printf("x = ");
//         scanf("%f",&x);
//         sum += x;
//         ++count;
//     }
//     average = sum/n;
//     printf("\n The average is %f\n",average);
// }


//  do while loop //

// {
//     int digit=10;
//     do
//     {
//        printf("%d\n",digit++);
//     } 
//     while (digit <= 9);
// }  

// #define EOL '\n'
// {
//     int count=-1,tag;
//     char letter[80];
//     do{
//         count=count +1;
//         letter[count]=getchar();
        
//     }
//     while(letter[count] != EOL);
//     tag=count;
//     count=0;
//     do{
//         putchar(toupper(letter[count]));
//         ++count;
//     }
//     while(count<tag);

// }

{
    int n,count =1;
    float x,average,sum=0;
    printf("how many number?");
    scanf("%d",&n);
    do{
        printf("x = ");
        scanf("%f",&x);
        sum += x;
        ++count;
    }
    while(count <= n);
    average = sum/n;
    printf("\n The average is %f\n",average);
}




