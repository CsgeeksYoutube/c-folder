#include<stdio.h>
// void main(){
//     int a;
//     void modify(int x);
//     printf("\n From main, before calling the function\n");
//     a= -9;
//     printf("a = %d\n",a);
//     printf("a = %d\n",&a);
//     modify(a);
//     printf("\n From main, before calling the function\n");
//     printf("a = %d\n",a);
//     printf("a = %d\n",&a);
// }
// void modify(int x){
//     printf("\n From modify function, before calling the function\n");
    
//     x= -12;
//     printf("x = %d\n",x);
//     printf("x = %d\n",&x);
//     return;
// }



// change the values of array 
// void main()
// {
//     int count, a[3];
//     void modify(int a[]);
//     printf("\n From main, before calling the function\n");
//     for(count =0; count<= 2;++count){
//         a[count]=count +1;
//         printf("a[%d] = %d\n", count,a[count]);
//     }
//     modify(a);
//     printf("\n From main, after calling the function\n");
//     for(count =0; count<= 2;++count)
//         printf("a[%d] = %d\n", count,a[count]);
// }
// void modify(int a[]){
//     int count;
//     printf("\n From the function after modifying the values\n");
//     for(count =0; count<= 2;++count){
//         a[count]=-9;
//         printf("a[%d] = %d\n", count,a[count]);
//     }
//     return;
// }


