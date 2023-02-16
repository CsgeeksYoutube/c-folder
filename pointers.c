#include<stdio.h>
// void main(){
//     int a=3;
//     int v;
//     int *pv;
//     int *pa;
//     pa = &a;
//     v=*pa;
//     pv=&v;
//     printf("\n a=%d &a=%X pa=%X *pa=%d",a,&a,pa,*pa);
//     printf("\n v=%d &v=%X pv=%X *pv=%d",v,&v,pv,*pv);

// }

// void main(){
//     int u1,u2;
//     int v=3;
//     int *pv;
//     u1= 2*(v+5);
//     pv=&v;
//     u2=2*(*pv +5);
//     printf("\n u1=%d u2=%d",u1,u2);

// }

// void main(){
//     int u=4;
//     int v=5;
//     void modify1(int u,int v);
//     void modify2(int *pu,int *pv);
//     printf("\n  before calling the function1 u=%d, v=%d \n",u,v);
//     modify1(u,v);
//     printf("\n  after calling the function1 u=%d, v=%d \n",u,v);

//     printf("\n  before calling the function2 u=%d, v=%d \n",u,v);
//     modify2(&u,&v);
//     printf("\n  after calling the function2 u=%d, v=%d \n",u,v);
// }
// void modify1(int u,int v){
//     u=0;
//     v=25;
//     printf("\n From modify1 function u=%d, v=%d \n",u,v);
//     return;
// }
// void modify2(int *pu,int *pv){
//     *pu=0;
//     *pv=25;
//     printf("\n From modify2 functions *pu=%d, *pv=%d \n",*pu,*pv);
//     return;
// }

// void main(){
//     int i;
//     static int x[10]={0,1,2,3,4,5,6,7,8,9};
//     for(i=0;i<=9;++i)
//         printf("\n %d  %d  %d  %X  %X ",i ,x[i],*(x+i),&x[i],x+i);
// }

// void main(){
//     int line[80];
//     line[1]=5;
//     line[2]=6;
//     int *pl;
//     line[2]= line[1];
//     printf("\n %d, %d",line[1],line[2]);
//     line[2]= *(line+1);
//     printf("\n %d, %d",line[1],line[2]);
//     *(line+2)= line[1];
//     printf("\n %d, %d",line[1],line[2]);
//     *(line+2)= *(line+1);
//     printf("\n %d, %d",line[1],line[2]);
// }