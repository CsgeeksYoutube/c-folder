#include<stdio.h>

// void main()
// {
//     int digit;
//     for(digit=0; digit<=9; digit++)
//         printf("%d\n",digit);
    
// }

//convert a line of lower-case text op upper-case
// #include<ctype.h>
// #define EOL '\n'
// void main()
// {
//     char letter[80];
//     int tag,count;
//     for(count=0;(letter[count]=getchar())!= EOL; count++);
//     tag=count;
//     for(count =0;count <tag;++count)
//         putchar(toupper(letter[count]));
// }

//calculate the average of n number

void main(){
    int n,count;
    float x, average,sum=0;
    printf("How many numbers");
    scanf("%d",&n);
    for(count =1;count<=n;++count){
        printf("x= ");
        scanf("%f",&x);
        sum += x;
    }
    average = sum/n;
    printf("\n The average is %f\n",average);
}


