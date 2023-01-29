#include<stdio.h>
// void main(){
//     int n, count,loops,loopcount;
//     float x,average,sum;
//     printf("how many number of lists");
//     scanf("%d",&loops);

//     for(loopcount =1; loopcount<=loops;loopcount++)
//     {
//         sum=0;
//         printf("\n list number %d\n How many number?",loopcount);
//         scanf("%d",&n);
//         for (count=1;count<=n; ++count){
//             printf("x = ");
//             scanf("%f",&x);
//             sum+= x;
//         }
//         average = sum/n;
//         printf("\n the average is %f\n",average);

//     }
// }

//convert serveral line of text to upper-case
//continue conversion until the first character in a line is (*)

#include<ctype.h>
#define EOL '\n'
void main()
{
    char letter[80];
    int tag,count,linecount=1;
    while((letter[0]=getchar()) != '*')
    {
        for(count=1;(letter[count]=getchar())!= EOL; ++count);
        tag=count;
        for(count=0;count<tag;++count)
            putchar(toupper(letter[count]));
        printf("\n\n");
        ++linecount;
    }
    printf("good bye ");
}