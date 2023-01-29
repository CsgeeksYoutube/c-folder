// calcuate the average of the nonnegative numbers in a
// list of n number
#include<stdio.h>
// void main()
// {
//    int n,count, navg=0;
//    float x, average, sum=0;
//    printf("how many numbers?");
//    scanf("%d",&n);
//    for(count =1;count<=n;++count){
//     printf("x = ");
//     scanf("%f",&x);
//     if(x < 0) continue;
//     sum +=x;
//     ++navg;
//    }
//    average = sum/navg;
//    printf("\n The average is %f\n",average);
// }

// COMMA OPERATOR AND PALINDROME CODE


#define EOL '\n'
#define TRUE 1
#define FALSE 0

void main(){
    char letter[80];
    int tag,count,countback,flag,loop=TRUE;
    while(loop){
        flag=TRUE;

        printf("enter a word \n");
        for (count =0;(letter[count]=getchar()) !=EOL; ++count);
        tag = count-1;
        
        for((count=0,countback =tag); count <=tag/2;(++count,--countback)){
            if(letter[count] != letter[countback]){
                flag=FALSE;
                break;
            }
        }
        for(count=0;count<=tag;++count)
            putchar(letter[count]);
        if(flag) printf(" IS a palindrome\n\n");
        else printf(" IS NOT a palindrome\n\n");
    }
}

