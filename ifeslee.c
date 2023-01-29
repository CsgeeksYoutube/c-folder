#include<stdio.h>
// void main()
// { 
//     int flag=0,a=1,digit;
//     if(flag){
//         for(digit=0;digit<=9;++digit)
//             printf("%d\n",digit);
    
//     }
//     else if(a) printf("noting to print");
//         else printf("a and flag are both zero");
    
// }


//encode each individual character and write it out
#include<ctype.h>
void main()
{


    char line[80];
    int count;
    printf("Enter a line of text below: \n");
    scanf("%[^\n]",line);

    for(count=0; line[count]!= '\0'; ++count){
        if (((line[count]>= '0')&& (line[count] < '9')) ||
            ((line[count]>= 'A')&& (line[count] < 'Z')) ||
            ((line[count]>= 'a')&& (line[count] < 'z')))
                putchar(line[count]+1);
        else if(line[count]== '9') putchar('0');
            else if(line[count]=='Z') putchar('A');
                else if(line[count]=='z') putchar('a');
                    else putchar('.');
    }
}