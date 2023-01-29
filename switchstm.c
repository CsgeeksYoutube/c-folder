#include<stdio.h>
void main(){
int choice=0;
switch (choice = getchar())
{
case 'r':
    printf("red");
    
case 'R':
    printf("RED");
    
case 'w':
case 'W':
    printf("WHITE");
    break;
   

case 'b':
case 'B':
    printf("BLACK");
    

default:
    printf("choice something");
}
}

//BREAK used in WHILE LOOP

// void main()
// {
//     int x;
//     printf("Enter any value of x less than 100\n");
//     scanf("%d",&x);
//     while(x <= 100){
//         if(x<0){
//             printf("negative value of x\n");
//             break;
//         }
//         printf("reenter the value of x");
//         scanf("%d",&x);
//     }
//     printf("break statm");
// }

//BREAK used in DO-WHILE LOOP

// void main()
// {
//     int x;

//     do{
//     printf("Enter any value of x less than 100\n");
//     scanf("%d",&x);
//         if(x<0){
//             printf("negative value of x\n");
//             break;
//         }
//     }while(x<=100);
//     printf("break statement run");
// }

//BREAK used in FOR LOOP

// void main()
// {
//     int x=0,count;

//     for(count=0;x<=100;++count){
//         printf("enter the value of x = \n");
//         scanf("%d",&x);
//         if(x<0){
//             printf("negative value entered");
//             break;
//         }

//     }
//     printf("hello");
// }